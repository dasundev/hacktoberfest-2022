<?php 

function OrderedId($stringfix, $id, $length=4, $suffix = 0) {
    
    $text = (!$suffix) ? $stringfix . "-" : "-" . $stringfix;

    $id_length = strlen($id);

    if($id_length>$length) return 'Id Length > Lenght ';

    $diff_length = $length - $id_length;

    for($x = 0; $x < $diff_length; $x++){
        $null .= '0'; 
    }

    $id_string = $null.$id;

    $id_string = (!$suffix) ? $text.$id_string : $id_string.$text;

    return $id_string;
}

echo OrderedId('ID', 99, 2);
// ID-099
echo "<br>";
echo OrderedId('ID', 342, 4, 1);
// 0342-ID
echo "<br>";
echo OrderedId('TXT', 1001, 5);
// TXT-01001
?>