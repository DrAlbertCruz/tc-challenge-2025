namespace tc2025;

function isPalindrome($x) {
	$original = $x;

	// Edge case 1: Negative numbers
	if ($x < 0) return False; 

	$agg = 0;
	while ( $x > 0 ) {
		$digit = $x % 10;
		$agg = $agg * 10 + $digit;
		// In PHP, `/` always produces a float, need this 
		// function instead.
		$x = intdiv( $x, 10 );
	}
	return $original == $agg;
}