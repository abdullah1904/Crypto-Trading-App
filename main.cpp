#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "CryptoApp.h"
using namespace std;


int main(){
    cryptoApp tradingApp;
    while (true){
        tradingApp.printMenu();
        tradingApp.processOption(tradingApp.getOption());
        cout << endl;
    }
    return 0;
}