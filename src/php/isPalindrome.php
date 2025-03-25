namespace tc2025;

function isPalindrome($x) {
	$original = $x;

	if ($x < 0) return False; 

	$agg = 0;
	while ( $x > 0 ) {
		$digit = $x % 10;
		$agg = $agg * 10 + $digit;
		$x = intdiv( $x, 10 );
	}
	return $original == $agg;
}