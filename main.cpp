#include <iostream>
using namespace std;
int main(){
    while (true){
        int option;
        cout << "   --: Menu :--" << endl<< endl;
        cout << "1) Print help" << endl;
        cout << "2) Print exchange stats" << endl;
        cout << "3) Place an ask" << endl;
        cout << "4) Place a bid" << endl;
        cout << "5) Print Wallet" << endl;
        cout << "6) Continue" << endl<< endl;
        cout << "Select option here: ";
        cin >> option;
        cout << "Chose: " << option << endl;
        if (option == 0){
            cout << "Invalid Choice! Enter Valid Option" << endl;
        }
        else if (option == 1){
            cout << "Help - Your aim is to make money. Analyze the market and make bids and offers" << endl;
        }
        else if (option == 2){
            cout << "Market looks good" << endl;
        }
        else if (option == 3){
            cout << "Mark and offer - enter the amount" << endl;
        }
        else if (option == 4){
            cout << "Make a bid - enter the amount" << endl;
        }
        else if (option == 5){
            cout << "Your wallet is empty" << endl;
        }
        else if (option == 6){
            cout << "Going to next time frame" << endl;
        }
        cout<<endl;
    }
    return 0;
}