class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveDollar = 0, tenDollar = 0;
        
        for(int bill : bills) {
            if(bill == 5) {
                // Collect the $5 bill
                fiveDollar++;
            } else if(bill == 10) {
                // Give back $5 change, if possible
                if(fiveDollar > 0) {
                    fiveDollar--;
                    tenDollar++;
                } else {
                    // Not enough $5 bills to give change
                    return false;
                }
            } else if(bill == 20) {
                // Prefer to give one $10 and one $5 as change
                if(tenDollar > 0 && fiveDollar > 0) {
                    tenDollar--;
                    fiveDollar--;
                } else if(fiveDollar >= 3) {
                    // Otherwise, give three $5 bills as change
                    fiveDollar -= 3;
                } else {
                    // Not enough change
                    return false;
                }
            }
        }
        
        return true;
    }
};
