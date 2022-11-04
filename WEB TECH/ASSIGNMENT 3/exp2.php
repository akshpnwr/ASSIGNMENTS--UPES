<?php 
    
    $cp =  $_POST['CP'];
    $sp =  $_POST['SP'];    

    if ($cp == $sp) {
        echo "NO PROFIT NO LOSS";
    }

    else if ($cp > $sp) {
        echo "Loss is : ";
        echo $cp-$sp;
    }

    else if ($cp < $sp) {
        echo "Profit is : ";
        echo $sp-$cp;
    }
?>