namespace tc2025;

function containsDuplicate($nums) {
	if ( is_null($nums) ) return False;

	$m = count($nums);
	if ( $m == 0 ) return False;

	$a = array();

	foreach ($nums as $i) {
		if (isset($a[$i])) $a[$i] += 1;
		else $a[$i] = 1;
	}

	foreach ($a as $i) {
		if ( $i > 1 ) return True;
	}

	return False;
}