<?php

//convert camelcase to snakecase
$camelCase = 'camelCase';
function camelCaseToSnakeCase($camelCase)
{
    return strtolower(preg_replace('/(?<!^)[A-Z]/', '_$0', $camelCase));
}
echo camelCaseToSnakeCase($camelCase);
  
