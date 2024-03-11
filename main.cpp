#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printMenu();
int getOption();
void processOption(int);
void printHelp();
void printMarketStats();
void enterOffer();
void enterBid();
void printWallet();
void nextTimeFrame();

enum class orderBookType{bid,ask};

class orderBookEntry{
    public:

        orderBookEntry  (double price, double amount, string timeStamp, string product, orderBookType orderType):price(price), amount(amount), timeStamp(timeStamp), product(product), orderType(orderType){
            
        }

        double price;
        double amount;
        string timeStamp;
        string product;
        orderBookType orderType;
};

int main(){
    orderBookEntry order1{10000, 0.002, "2020/03/17 17:01:24.884492", "ETH/BTC", orderBookType::bid};

    cout<<"Order 1 Price: "<<order1.price<<endl;
    cout<<"Order 1 Amount: "<<order1.amount<<endl;
    cout<<"Order 1 Time Stamp: "<<order1.timeStamp<<endl;
    cout<<"Order 1 Product: "<<order1.product<<endl;

    while (true){
        printMenu();
        processOption(getOption());
        cout << endl;
    }
    return 0;
}

void printMenu(){
    cout << "   --: Menu :--" << endl<< endl;
    cout << "1) Print help" << endl;
    cout << "2) Print exchange stats" << endl;
    cout << "3) Place an ask" << endl;
    cout << "4) Place a bid" << endl;
    cout << "5) Print Wallet" << endl;
    cout << "6) Continue" << endl << endl;
}

int getOption(){
    cout << "Select option here: ";
    int option;
    cin >> option;
    cout << "Chose: " << option << endl;
    return option;
}

void processOption(int option){
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

void printHelp(){
    cout << "Help - Your aim is to make money. Analyze the market and make bids and offers" << endl;
}

void printMarketStats(){
    cout << "Market looks good" << endl;
}

void enterOffer(){
    cout << "Mark and offer - enter the amount" << endl;
}

void enterBid(){
    cout << "Make a bid - enter the amount" << endl;
}

void printWallet(){
    cout << "Your wallet is empty" << endl;
}

void nextTimeFrame(){
    cout << "Going to next time frame" << endl;
}