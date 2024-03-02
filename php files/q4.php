<?php
$text = "hello I am Akshit";

$words = explode(" ", $text);

$word_count = array();

foreach($words as $word) {
    $length = strlen($word);
    if(isset($word_count[$length])) {
        $word_count[$length]++;
    } else {
        $word_count[$length] = 1;
    }
}

echo "<table border='1'>";
echo "<tr><th>Word Length</th><th>Count</th></tr>";
foreach($word_count as $length => $count) {
    echo "<tr><td>$length</td><td>$count</td></tr>";
}
echo "</table>";
?>