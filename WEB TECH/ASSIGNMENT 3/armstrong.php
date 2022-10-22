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
        echo "<h1>All 3 digit Armstrong numbers</h1>";
    ?>
    <?php 
        echo "<ul>";
        for ($num = 100;$num <1000; $num++) {
            $temp = $num;
            $sum_of_cubes = 0;
            while ($temp!=0) {
                $a = $temp%10;
                $sum_of_cubes += $a*$a*$a;
                $temp = $temp/10;
            }

            if($sum_of_cubes == $num) {
                echo "<li>";
                echo $sum_of_cubes;
                echo "</li>";

            }
        }
        echo "</ul>";
    ?>
</body>
</html> 