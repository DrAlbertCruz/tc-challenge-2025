namespace tc2025;

function isPalindrome($s) {
	// Strip non-alphabetic characters using a regular expression
	$s = preg_replace("/[^a-zA-Z0-9]/", "", $s);
	// Exerything to lower case
	$s = strtolower($s);

	// Compare with reversed string
	return $s === strrev($s);
}