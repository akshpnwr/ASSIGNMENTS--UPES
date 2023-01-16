<html>
    <body>
        <?php
echo "<h2>Matrix</h2>";
$a=array(array());
$rows=3; 
$cols=3; 
$m=1;
for($i=0;$i<$rows;$i=$i+1)
{
    for($j=0;$j<$cols;$j=$j+1)
    {
        $a[$i][$j]=$m;
        echo $a[$i][$j]." ";
        $m=$m+1;
    }
    echo "<br>";
}
echo "<h2>Transpose of matrix</h2>";
for($i=0;$i<$rows;$i=$i+1)
{
    for($j=0;$j<$cols;$j=$j+1)
    {
        $a[$i][$j]=$a[$j][$i];
        echo $a[$i][$j]." ";
    }
    echo "<br>"; 
}
        ?>
    </body>
</html>