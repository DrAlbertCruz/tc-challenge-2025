namespace tc2025;

function twoSum($nums, $target) {
	$diff_indices = array(); 

	for ($i = 0; $i < count($nums); $i++) {
		$difference = $target - $nums[$i];

		if (array_key_exists($nums[$i], $diff_indices)) {
			return [$diff_indices[$nums[$i]], $i];
		} else {
			$diff_indices[$difference] = $i;
		}
	}
}