#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

bool isPalindrome( char* a ) {
	char p, q;
	// C strings are immutable. Additionally, there is no built in function to reverse 
	// the string. So, we construct a `for` loop that iterates through the elements in the 
	// array.
	
	// We set a pointer to the front ...
	char* front = a;
	// And a pointer at the end ...
	char* end = &a[strlen(a) - 1];
	
	// While front has not passed end, this handles both odd and even length arrays.
	while( front < end ) {
		// Find the "next" alpha character on the left ...
		do { p = *front++; } while ( !isalpha(p) );
		// Find the "next" alpha character on the right ...
		do { q = *end--; } while ( !isalpha(q) );
		if ( tolower(p) != tolower(q) ) return false;
	}

	return true;
}