namespace tc-2025;

function reverseWords($s) {
	$exploded = explode( ' ', $s );
	// Edge case: There may be multiple spaces
	$words = array_diff( $exploded, [""] );
	$reversed = implode( ' ', array_reverse( $words ));
	return $reversed;
}


	$exploded = trim($s);
	// Edge case: There may be multiple spaces
	$words = array_diff( $exploded, [""] );
	$reversed = implode( ' ', array_reverse( $words ));
	return $reversed;