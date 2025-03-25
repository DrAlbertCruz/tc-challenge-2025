namespace tc2025;

function isAnagram($s, $t) {
	$m = strlen($s);
	$n = strlen($t);

	if ( $m != $n ) return False;

	$a = array();

	foreach (str_split($s) as $i) {
		if (isset($a[$i])) $a[$i] += 1;
		else $a[$i] = 1;
	}

	foreach (str_split($t) as $i) {
		if (isset($a[$i])) $a[$i] -= 1;
		else $a[$i] = -1;
	}

	foreach ($a as $i) {
		if ( $i != 0 ) return False;
	}

	return True;
}