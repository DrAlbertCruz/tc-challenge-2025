class Solution {
private:
    int roman_value(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0; // or throw if invalid input
        }
    }
public:
    int romanToInt(string_view s) {
        // There are built in members that allow you to engage the objects
        // iterator, in reverse. To manually manipulate pointers in C++ is
        // "not modern".
        int prev = 0, total = 0;
        for (auto it = s.rbegin(); it != s.rend(); ++it) {
            int value = roman_value(*it);
            if (value < prev) total -= value;
            else total += value;
            prev = value;
        }
        return total;
    }
};