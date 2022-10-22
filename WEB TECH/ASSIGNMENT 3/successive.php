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
        echo "<h1>Successive Numbers</h1>";
    ?>

    <?php 
        $i = 1;
        $j = 2;
        $k = 3;

        while($k<998) {
            $square = $j*$j;
            $sum_of_unity = $i * $k + 1;
            
            if($square == $sum_of_unity) {
                echo $i;
                echo " ";
                echo $j;
                echo " ";
                echo $k;
                echo "<br>";
            }
            $i++;
            $j++;
            $k++;

        }

    ?>
</body>
</html>