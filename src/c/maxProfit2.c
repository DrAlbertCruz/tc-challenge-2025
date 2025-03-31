int maxProfit(int* prices, int pricesSize) {
    bool holding = false;
    int buyValue, current, next, gains = 0;
    for ( int i = 0; i < pricesSize - 1; i++ ) {
        current = prices[i];
        next = prices[i+1];
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
        gains += prices[pricesSize - 1] - buyValue;
    }
    return gains;
}