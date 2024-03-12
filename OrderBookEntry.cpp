#include "OrderBookEntry.h"

using namespace std;

orderBookEntry::orderBookEntry(double price, double amount, string timeStamp, string product, orderBookType orderType):price(price), amount(amount), timeStamp(timeStamp), product(product), orderType(orderType){
    // Constructor Code
}