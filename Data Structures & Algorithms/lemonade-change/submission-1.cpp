class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> curr(3,0);

        for (int i=0 ; i<bills.size(); i++) {
            if (bills[i] == 5) {
                curr[0]++;
            }

            else {
                if (bills[i] == 10) {
                    if (curr[0]) {
                        curr[0]--;
                        curr[1]++;
                    }
                    else return false;
                }

                if (bills[i] == 20) {
                    if (curr[1] && curr[0]) {
                        curr[1]--;
                        curr[0]--;
                    }
                    else if (curr[0]>2) {
                        curr[0] -= 3;
                    }

                    else return false;
                }
            }
        }

        return true;
    }
};