class Solution {

    /**
     * @param String $s
     * @return Integer
     */
	function romanToInt($s) {
    $total = 0;
    $prev = 0;
    for ($i = strlen($s) - 1; $i >= 0; $i--) {
        switch ($s[$i]) {
            case 'I': 
                $curr = 1;
                break;
            case 'V': 
                $curr = 5;
                break;
            case 'X': 
                $curr = 10;
                break;
            case 'L': 
                $curr = 50;
                break;
            case 'C': 
                $curr = 100;
                break;
            case 'D': 
                $curr = 500;
                break;
            case 'M': 
                $curr = 1000;
                break;
            default: 
                $curr = 0;
        }

        if ($curr < $prev)
            $total -= $curr;
        else
            $total += $curr;
        $prev = $curr;
    }
    return $total;
}