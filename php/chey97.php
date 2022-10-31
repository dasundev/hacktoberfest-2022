// Remove the Special Characters from a String #27

<?php
 
  // Function to remove the special
  function RemoveSpecialChar($str) {
      $res = str_replace( array( '\'', '"',
      ',' , ';', '<', '>' ), ' ', $str);
      return $res;
      }
 
  // Given string
  $str = "Example,to remove<the>Special'Char;";
 
  $str1 = RemoveSpecialChar($str);
 
  // Printing the result
  echo $str1;
?>
