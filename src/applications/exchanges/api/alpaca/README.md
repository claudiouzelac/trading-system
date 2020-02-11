# Alpaca

## Compiling

`bazel build //src/applications/exchanges/api/alpaca:applications_exchanges_api_alpaca_application`

## Rate Limits

Per the Alpaca documentation [here](https://docs.alpaca.markets/api-documentation/api-v2/),
the API is throttled at:

    ```
    The rate limit is 200 requests per every minute per API key.
    ```

This is 3.33 requests per second.

## References

1. [Alpaca API Documentation](https://docs.alpaca.markets/api-documentation/)
2. [RFC6455: The WebSocket Protocol](https://tools.ietf.org/html/rfc6455)
3. [Boost Beast Examples](https://github.com/boostorg/beast/tree/develop/example)

## Author(s)

Stewart Henderson
