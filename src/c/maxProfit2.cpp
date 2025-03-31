class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool holding = false;
        int buyValue, current, next, gains = 0;
        for (auto it = prices.begin(); it != prices.end() - 1; ++it) {
            current = *it;
            next = *(it + 1);
            // Enter buy mode if the current day is cheaper than the next day
            if ( current < next && !holding ) {
                holding = true;
                buyValue = current;
            }
            // If tomorrow is a loss, sell now
            else if ( current > next && holding ) {
                holding = false;
                gains += current - buyValue;
            }
        }
        // Still bag holding?
        if ( holding ) {
            gains += prices.back() - buyValue;
        }
    return gains;
    }
};