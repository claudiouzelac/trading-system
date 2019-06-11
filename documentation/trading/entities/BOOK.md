# Book Entity Documentation

The definition of a `Book` for the purposes of this project is a view of the market of an instrument by a vendor.  It will be considered 
for this project to be of the available bids and offers.  A bid is the price that a market participant is willing to pay for the acquisition of the quoted instrument.  An offer is the price that a market participant is willing to sell their position to a bidder.  A book is an aggregated of the volumes by both bids and offers into a consolidation object which will be referred to as a book.  

## Notation

For the purposes of discussion, we will refer to a book in JSON format for examples here.  It will appear as follows for a particular symbol from a vendor:

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

where,

    * `symbol` is the quoted symbol in the marketplace
    * `levels` are the quoted price levels in the marketplace
    * `bids` are the bidding levels for that marketplace
    * `offers` are the offered levels in that marketplace

An example of terminology from trading desks, a trader would say reading this:

    "The market for `symbol` is 8 by 9."

## Authors

Stewart Henderson