<?php

    function bubbleSort(&$arr){
        $n = sizeof($arr);

        for($i = 0; $i < $n; $i++) {
            for ($j = 0; $j < $n - $i - 1; $j++) {

                if ($arr[$j] > $arr[$j+1]) // Swap
                {
                    $t = $arr[$j];
                    $arr[$j] = $arr[$j+1];
                    $arr[$j+1] = $t;
                }
        }
        }
    }

    $arr = array(12, 10, -1, 2, 4, 50, 100, 54);

    echo "Original Array:\n";
    print_r($arr);

    bubbleSort($arr);
    echo "\nArray after Bubble Sort:\n";
    print_r($arr);

?>