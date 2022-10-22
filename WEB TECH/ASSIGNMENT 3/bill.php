<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

    <?php 
        echo "<h1>Electricity bill calculator</h1>"
    ?>
    <?php 
        $no_of_units = 278;
        $bill = 0;

        for ($x = 1 ; $x<=$no_of_units; $x++) {
            if($x <= 50) {
                $bill += 3.50;
            }
            if($x>50 && $x<= 150) {
                $bill += 4.00;
            }
            if($x>150 and $x<= 250) {
                $bill += 5.20;
            }
            if($x>250) {
                $bill += 6.50;
            }
        }

        echo "<h3>The total bill for ";
        echo $no_of_units;
        echo " units is ";
        echo $bill;
        echo " Rupees.</h3>";
    ?>
</body>
</html>