namespace tc2025;

function singleNumber($nums) {
	// Note that a XOR 0 = a, so initialize to zero
	$a = 0;
	// PHP has all arrays as hash tables by default, and using [] causes
	// a hash table lookup. The `foreach` language construct is highly 
	// optimized and is quicker.
	foreach ( $nums as $i ) {
		// a XOR a XOR b = b and so on
		$a ^= $i;
	}
	return $a;
}