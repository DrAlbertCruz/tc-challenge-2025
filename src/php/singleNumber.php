namespace tc2025;

function singleNumber($nums) {
	$a = 0;
	$n = count($nums);
	foreach ( $nums as $i ) {
		$a ^= $i;
	}
	return $a;
}