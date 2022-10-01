<?php

// How Many Vowels? #22

$string = "Count How Many Vowels";
echo "There are <strong>".preg_match_all('/[aeiou]/i',$string,$matches)." vowels</strong> in the string <strong>".$string."</strong>";

?>