<?php

// Return the Sum of Two Numbers #1

function sum($x, $y) {
    return $x + $y;
}

echo "Sum of Two Numbers: " . sum(5, 6);

function sumOfArray($numArray)
{
    $total = 0;
    for ($i = 0; $i < sizeof($numArray); $i++) {
        $total = $total + $numArray[$i];
    }
    return $total;
}

echo "Sum of Array is " . sumOfArray([5, 6, 34, 12, 45]);

?>