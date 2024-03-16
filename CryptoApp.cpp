#include <iostream>
#include <vector>
#include "CryptoApp.h"
#include "OrderBookEntry.h"

using namespace std;

cryptoApp::cryptoApp(){
    // Constructor Definition
}

void cryptoApp::init(){
    loadOrderBook();
    int input;
    while(true){
        this->printMenu();
        this->processOption(this->getOption());
        cout<<endl;
    }
}

void cryptoApp::loadOrderBook(){
    orders.push_back(orderBookEntry {1000,0.1,"2020/03/17 17:02:00.124758","ETH/BTC",orderBookType::bid});
    orders.push_back(orderBookEntry {3000,0.05,"2020/03/17 17:02:34.124758","BTC/ETH",orderBookType::ask});
}

void cryptoApp::printMenu(){
    cout << "   --: Menu :--" << endl<< endl;
    cout << "1) Print help" << endl;
    cout << "2) Print exchange stats" << endl;
    cout << "3) Place an ask" << endl;
    cout << "4) Place a bid" << endl;
    cout << "5) Print Wallet" << endl;
    cout << "6) Continue" << endl << endl;
}

int cryptoApp::getOption(){
    cout << "Select option here: ";
    int option;
    cin >> option;
    cout << "Chose: " << option << endl;
    return option;
}

void cryptoApp::processOption(int option){
    if (option == 0 || option>6){
        cout << "Invalid Choice! Enter Valid Option" << endl;
    }
    else if (option == 1){
        printHelp();
    }
    else if (option == 2){
        printMarketStats();
    }
    else if (option == 3){
        enterOffer();
    }
    else if (option == 4){
        enterBid();
    }
    else if (option == 5){
        printWallet();
    }
    else if (option == 6){
        nextTimeFrame();
    }
}

void cryptoApp::printHelp(){
    cout << "Help - Your aim is to make money. Analyze the market and make bids and offers" << endl;
}

void cryptoApp::printMarketStats(){
    cout << "Order Book contains : " << orders.size() << " entries" << endl;
}

void cryptoApp::enterOffer(){
    cout << "Mark and offer - enter the amount" << endl;
}

void cryptoApp::enterBid(){
    cout << "Make a bid - enter the amount" << endl;
}

void cryptoApp::printWallet(){
    cout << "Your wallet is empty" << endl;
}

void cryptoApp::nextTimeFrame(){
    cout << "Going to next time frame" << endl;
}