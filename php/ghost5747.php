<?php 

function removeDuplicates($array){
    return array_unique($array, SORT_REGULAR);
}

print_r(removeDuplicates([1,4,5,4,2,5,7,3]));

function findLargest($array){
    return print_r(max($array));
}

findLargest([1,4,5,4,2,5,7,3]);


function sumOfNumbers($array){
    return print_r(array_sum($array));
}

sumOfNumbers([1,4,5,4,2,5,7,3]);

function oddOrEven($num){
    if($num % 2 == 0){
        print_r("Even number");
    }else{
        print_r("Odd number");
    }
}

oddOrEven(2);

?>