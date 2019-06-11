# Aggregated Book Entity Documentation

An aggregated book is a consolidated book of market data from disparate market places.

## Notation

For the purposes of discussion, we will refer to a book in JSON format for examples here.

## FX Spot Market Example

Consider the case of the FX spot currency market in which multiple vendors provide quotes on the same instrument in this example:

Vendor A: [Currenex](https://currenex.com/)
Vendor B: [LMAX FX](https://www.lmax.com/fx-trading)

Now consider a [book](./BOOK.md) object from vendor A in the form of:

```
{
   "symbol":{
      "levels":[
         8,
         9,
         10
      ],
      "bids":{
         "8":100
      },
      "offers":{
         "9":200,
         "10":100
      }
   }
}
```

Where `symbol` is the symbol of some hypothetical instrument for this example.

Now consider a [book](./BOOK.md) object from vendor B in the form of:

```
{
   "symbol":{
      "levels":[
         7,
         8,
         9,
         10
      ],
      "bids":{
         "7":200
         "8":500
      },
      "offers":{
         "9":100,
         "10":1200
      }
   }
}
```

An aggregated book is merely the summation across books volumes at each price level like so:

```
{
   "symbol":{
      "levels":[
         7,
         8,
         9,
         10
      ],
      "bids":{
         "7":200,
         "8":600
      },
      "offers":{
         "9":300,
         "10":1300
      }
   }
}
```

## Arbitrage Opportunities

What happens when upon the aggregation of markets that there is a crossing of prices?  Consider the example of the best possible price on 
vendor a is greater than vendor b by a point.  You could visually see this as follows:


```
{
   "symbol":{
      "levels":[
         7,
         8,
         9,
         10
      ],
      "bids":{
         "7":200,
         "8":600,
         "9": 200
      },
      "offers":{
         "9":100,
         "10":1300
      }
   }
}
```

It becomes apparent that you could arbitrage 100 units of the symbol priced at 9 assuming many things (execution, transaction costs, etc).  If you were to tie in metadata as to how to route to the destination in the JSON form above, it would become more apparent.

## Authors

Stewart Henderson
