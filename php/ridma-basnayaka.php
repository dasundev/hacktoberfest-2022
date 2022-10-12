<?php 
// Volume of a Cone #23
// This a  PHP program which calculates the volume of a cone.    
// Function to find volume   
function find_Volume_of_cone($r, $h)   
{     
$pi =  3.14;  
$Volume_of_cone =  ($pi *  $r * $r * $h) / 3 ; // It is a formula which calculates the volume  and store the value in the volume_of_cone variable.   
return ($Volume_of_cone);   
}   
  
$radius = 10;   
$height = 10;  
  
echo find_Volume_of_cone($radius, $height);  
