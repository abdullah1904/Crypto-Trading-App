class cryptoApp{
    public:
        cryptoApp();
        void init();
        void printMenu();
        int getOption();
        void processOption(int);
        void printHelp();
        void printMarketStats();
        void enterOffer();
        void enterBid();
        void printWallet();
        void nextTimeFrame();
};