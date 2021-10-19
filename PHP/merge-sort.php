<?php
    // --------------- Merge Sort Algo ----------------------
    function mergesort(&$arr, $left, $right) {
        if ($left < $right) { 
            $mid = $left + (int)(($right - $left)/2);
            mergesort($arr, $left, $mid);
            mergesort($arr, $mid+1, $right);
            merge($arr, $left, $mid, $right);
        }
    }
    
    // This function merges the arrays
    function merge(&$arr, $left, $mid, $right) {

        $n1 = $mid - $left + 1; //LeftArray size
        $n2 = $right - $mid;     //RightArray size
        
        $LeftArray = array_fill(0, $n1, 0); 
        $RightArray = array_fill(0, $n2, 0);
        
        for($i=0; $i < $n1; $i++) { 
            $LeftArray[$i] = $arr[$left + $i];
        }
        for($i=0; $i < $n2; $i++) { 
            $RightArray[$i] = $arr[$mid + $i + 1];
        }
    

        $l=0; $r=0; $i=$left;
        while($l < $n1 && $r < $n2) {
            if($LeftArray[$l] < $RightArray[$r]) { 
                $arr[$i] = $LeftArray[$l]; 
                $l++; 
            }
            else { 
                $arr[$i] = $RightArray[$r];  
                $r++; 
            }
            $i++;
        }
    
        while($l < $n1) { 
            $arr[$i] = $LeftArray[$l];  
            $l++;  
            $i++;
        }
    
        while($r < $n2) { 
            $arr[$i] = $RightArray[$r]; 
            $r++;  
            $i++; 
        }
    }
    


    // --------------- Calling the function with array-------------
     
    $MyArray = array(100, 23, -10, 8, 0, 188, 928, 19, 989, 9, 1002);
    $n = sizeof($MyArray); 
    echo "Array:\n";
    print_r($MyArray);
    
    mergesort($MyArray, 0, $n-1);
    echo "Array After sorting:\n";
    print_r($MyArray);
?>