<?php

/**
 * Convert Minutes into Seconds
 * @param int $minutes
 * @return int
 */
function convertMinutesToSeconds(int $minutes): int
{
    return $minutes * 60;
}

$minutes = random_int(0, 100);
echo "Problem #1 (convertMinutesToSeconds): {$minutes}m = " . convertMinutesToSeconds($minutes) . "s";
