<?php

// Multiplies input array values by two and returns a new array
function multiply_by_two($arr)
{
    $new_arr = array_map(function ($item) { // Map array and multply each value by 2
        return $item * 2;
    }, $arr);
    return $new_arr;
}

$num_arr = [1, 2, 3, 4, 5, 6];
$num_arr_str = implode(",", $num_arr); # Convert array into a string

$new_arr = multiply_by_two($num_arr);
$new_arr_str = implode(",", $new_arr);

echo "Before multiplying: " . $num_arr_str . "<br />";
echo "After multiplying: " . $new_arr_str . "<br />";
