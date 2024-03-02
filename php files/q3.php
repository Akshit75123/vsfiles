<?php
$states = "Mississippi Alabama Texas Massachusetts Kansas";
$statesArray = array();


// Search for a word in $states that ends in xas
if (preg_match('/\bxas\b/', $states, $matches)) {
    $statesArray[0] = $matches[0];
}


// Search for a word in $states that begins with k and ends in s (case sensitive)
if (preg_match('/\bK\w+s\b/', $states, $matches)) {
    $statesArray[1] = $matches[0];
}


// Search for a word in $states that begins with M and ends with s
if (preg_match('/\bM\w+s\b/', $states, $matches)) {
    $statesArray[2] = $matches[0];
}


// Search for a word in $states that ends in a
if (preg_match('/\b\w+a\b/', $states, $matches)) {
    $statesArray[3] = $matches[0];
}


// Search for a word in $states at the beginning of the string that starts with M
if (preg_match('/\b^M\w+/', $states, $matches)) {
    $statesArray[4] = $matches[0];
}


// Output the $statesArray
print_r($statesArray);
?>