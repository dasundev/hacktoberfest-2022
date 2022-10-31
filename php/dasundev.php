<?php

// Return the Sum of Two Numbers #1

function sum($x, $y)
{
    return $x + $y;
}

echo "Sum of Two Numbers: " . sum(5, 6);

function reverseAnArray($array)
{
    return print_r(array_reverse($array));
}

echo "Reverse an array : " . reverseAnArray([1, 2, 3, 4]);

function lastEl($array){
    return end($array);
}

echo "The last element of the array is : " . lastEl([1, 2, 3, 4]);
?>
