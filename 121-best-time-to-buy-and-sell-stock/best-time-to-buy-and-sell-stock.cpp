class Solution {
public:
    void maxProfitFinder(vector<int>& prices,int i,int& minprice,int& maxprofit){
        if(i==prices.size()) return ;
        if(minprice>prices[i]){
            minprice=prices[i];
        }
        int todayprofit=prices[i]-minprice;
        if(maxprofit<todayprofit){
            maxprofit=todayprofit;
        }
        maxProfitFinder(prices,i+1,minprice,maxprofit);
    }
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=INT_MIN;
        maxProfitFinder(prices,0,minprice,maxprofit);
        return maxprofit;
    }
};