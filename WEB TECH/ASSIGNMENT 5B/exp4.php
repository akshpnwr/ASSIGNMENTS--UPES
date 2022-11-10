

<?php
    $FSAL = $_POST['fixed_salary'];
    $SAMT = $_POST['sales_amount'];
    $COM = 0; 

    if ($SAMT > 5000) {
        $COM = ($SAMT - 5000) * .12;
    }

    else {
        $COM = 0;
    }

    $REMU = $FSAL + $COM;

    echo "The remuneration is ";
    echo $REMU;
?>
