#include <stdio.h>
#include <string.h>

int romanToInt ( char* s ) {
    char next, current;
    size_t len = strlen( s );
    char* ptr = s + len - 1; // Start end end of the string
    int value = 0;
    int total = 0;
    while ( ptr >= s ) {
        // Get current char
        current = *ptr;

        // Get next char
        next = 0;
        if ( ptr - 1 >= s ) next = *(ptr - 1);

        switch( current ) {
            case 'I':
                value = 1;
                break;
            case 'V':
                if( next == 'I' ) {
                    value = 4;
                    ptr--;
                }
                else value = 5;
                break;
            case 'X':
                if( next == 'I' ) {
                    value = 9;
                    ptr--;
                }
                else value = 10;
                break;
           case 'L':
                if( next == 'X' ) {
                    value = 40;
                    ptr--;
                }
                else value = 50;
                break;
            case 'C':
                if( next == 'X' ) {
                    value = 90;
                    ptr--;
                }
                else value = 100;
                break;
            case 'D':
                if( next == 'C' ) {
                    value = 400;
                    ptr--;
                }
                else value = 500;
                break;
            case 'M':
                if( next == 'C' ) {
                    value = 900;
                    ptr--;
                }
                else value = 1000;
                break;
            default:
                value = 0;
        }
        total += value;
        ptr--;
    }
    return total;
}