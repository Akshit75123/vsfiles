<?php
   
    function sortBubble($str) {
        $arr = str_split($str);
        $n = count($arr);
        $count = 0;
        
        for ($i = 0; $i < $n - 1; $i++) {
            for ($j = 0; $j < $n - $i - 1; $j++) {
                $count++;
                if ($arr[$j] > $arr[$j + 1]) {
                    $temp = $arr[$j];
                    $arr[$j] = $arr[$j + 1];
                    $arr[$j + 1] = $temp;
                }
            }
        }
        
        return array($arr, $count);
    }
    
    function sortInsertion($str) {
        $arr = str_split($str);
        $n = count($arr);
        $count = 0;
        
        for ($i = 1; $i < $n; $i++) {
            $key = $arr[$i];
            $j = $i - 1;
            while ($j >= 0 && $arr[$j] > $key) {
                $count++;
                $arr[$j + 1] = $arr[$j];
                $j--;
            }
            $arr[$j + 1] = $key;
        }
        
        return array($arr, $count);
    }
    
    function sortSelection($str) {
        $arr = str_split($str);
        $n = count($arr);
        $count = 0;
        
        for ($i = 0; $i < $n - 1; $i++) {
            $min_idx = $i;
            for ($j = $i + 1; $j < $n; $j++) {
                $count++;
                if ($arr[$j] < $arr[$min_idx]) {
                    $min_idx = $j;
                }
            }
            $temp = $arr[$i];
            $arr[$i] = $arr[$min_idx];
            $arr[$min_idx] = $temp;
        }
        
        return array($arr, $count);
    }
    
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {
        $str = $_POST['input-string'];
        $sort_type = $_POST['sort-type'];
        
        switch ($sort_type) {
            case 'bubble':
                list($sorted_arr, $iterations) = sortBubble($str);
                break;
            case 'insertion':
                list($sorted_arr, $iterations) = sortInsertion($str);
                break;
            case 'selection':
list($sorted_arr, $iterations) = sortSelection($str);
break;
default:
$sorted_arr = [];
$iterations = 0;
break;
}
$sorted_str = implode('', $sorted_arr);
    
    echo "<h2>Sorted String:</h2>";
    echo "<textarea rows='5' cols='50'>$sorted_str</textarea>";
    echo "<h2>Number of Iterations:</h2>";
    echo "<p>$iterations</p>";}
?>