#pragma once
#include <vector>
#include "OrderBookEntry.h"

class cryptoApp{
    public:
        cryptoApp();
        void init();
    private:
        void loadOrderBook();
        void printMenu();
        int getOption();
        void processOption(int);
        void printHelp();
        void printMarketStats();
        void enterOffer();
        void enterBid();
        void printWallet();
        void nextTimeFrame();
        std::vector<orderBookEntry> orders;
};