class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0,tens=0;
        for(int it:bills){
            if(it==5){
                fives++;
            }
            else if(it==10){
                tens++;
                fives--;
            }
            else if(tens>0)
            {
                tens--;
                fives--;
            }
            else{
                fives-=3;
            }

            if(fives<0) return false;
        }
        return true;
    }
};