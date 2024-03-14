#ifndef OrderBookEntry
#define OrderBookEntry

#include <string>

enum class orderBookType{bid,ask};

class orderBookEntry{
    public:
        orderBookEntry  (double price, double amount, std::string timeStamp, std::string product, orderBookType orderType);
        double price;
        double amount;
        std::string timeStamp;
        std::string product;
        orderBookType orderType;
};

#endif