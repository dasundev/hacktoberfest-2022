<?php 

function removeDuplicateinArray($array){
    return array_unique($array, SORT_REGULAR);
}
print_r(removeDuplicateinArray([1,10,5,4,2,5,7,9,10,11]));
?>