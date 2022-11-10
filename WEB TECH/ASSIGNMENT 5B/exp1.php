

 <?php 
    
    $n1 =  $_POST['num1'];
    $n2 =  $_POST['num2'];    
    $operand = $_POST['submit'];


    function add($n1,$n2) {
        $res = $n1 + $n2;
        echo "The sum is : ";
        echo $res;
    }
    function sub($n1,$n2) {
        $res = $n1 - $n2;
        echo "The res is : ";
        echo $res;
    }
    function multiply($n1,$n2) {
        $res = $n1 * $n2;
        echo "The multiply is : ";
        echo $res;
    }   

    function divide($n1,$n2) {
        $res = $n1 / $n2;
        echo "The divide is : ";
        echo $res;
    }   

    function root($n1,$n2) {
        $s1 = sqrt($n1);
        $s2 = sqrt($n2);

        echo 'Square root of ';
        echo $n1;
        echo " is : ";
        echo $s1;
        echo '<br>Square root of ';
        echo $n1;
        echo " is : ";
        echo $s2;

    }

    function random() {
        $r = rand();
        echo $r;
    }

    function power($n1,$n2) {
        $res = pow($n1, $n2);
        echo $res;
    }

    if ($operand == '+') {
        add($n1, $n2);
    }
    if ($operand == '-') {
        sub($n1, $n2);
    }
    if ($operand == '*') {
        multiply($n1, $n2);
    }
    if ($operand == '/') {
        divide($n1, $n2);
    }
    if ($operand == 'root') {
        root($n1,$n2);
    }
    if ($operand == 'sin') {
        echo "Sin of ";
        echo $n1;
        echo " is : ";
        echo sin($n1);
        echo "<br>Sin of ";
        echo $n2;
        echo " is : ";
        echo sin($n2);   
    }
    if ($operand == 'random') {
        random();
    }
    if ($operand == 'power') {
        power($n1,$n2);
    }

?>




