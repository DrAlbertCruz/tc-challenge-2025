namespace tc2025;

function topKFrequent($nums, $k) {
	$a = array();

	foreach ($nums as $i) {
		if (isset($a[$i])) $a[$i] += 1;
		else $a[$i] = 1;
	}

	arsort( $a );
	
	$akeys = array_keys($a);
	
	$b = [];
	for ($i = 0; $i < $k; $i++) {
		$b[] = $akeys[$i]; 
	}

	return $b;
}
