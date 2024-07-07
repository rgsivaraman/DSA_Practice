class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        while(numBottles>=numExchange){
            int full=numBottles/numExchange;
            sum=sum+full;
            numBottles=numBottles%numExchange+full;
        }
        return sum;
    }
};