<?php

    function insertionSort(&$arr){
        $n = sizeof($arr);

        for ($i = 1; $i < $n; $i++)
        {
            $curr = $arr[$i];
            $j = $i-1;
            while ($j >= 0 && $arr[$j] > $curr)
            {
                $arr[$j + 1] = $arr[$j];
                $j = $j - 1;
            }
            
            $arr[$j + 1] = $curr;
        }
    }

    $arr = array(12, 10, -1, 2, 4, 50, 100, 54);

    echo "Original Array:\n";
    print_r($arr);

    insertionSort($arr);
    echo "\nArray after Insertion Sort:\n";
    print_r($arr);

?>