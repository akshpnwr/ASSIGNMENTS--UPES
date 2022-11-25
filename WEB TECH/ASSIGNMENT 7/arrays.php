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
    $emp = array
    ( 
        array(1,"John Deo","Four",75,"female"), 
        array(2,"Max Ruin","Three",85,"male"),
        array(3,"Arnoid","Three",55,"male"),
        array(4,"Krish Star","Four",60,"female"),
        array(5,"John Mike","Four",60,"female"),
        array(6,"Alex John","Four",55,"male"), 
        array(7,"My John Rob","Five",78,"male"),
        array(8,"Asruid","Five",85,"male"),
        array(9,"Tes Qry","Six",78,"male"),
        array(10,"Big John","Four",55,"female") 
    ); 
?>
<table align="center" border='0' width="50%">
    <tr> 
        <td><h1>ID</h1></td> 
        <td><h1>Name</h1></td> 
        <td><h1>Class</h1></td> 
        <td><h1>Mark</h1></td>
        <td><h1>Gender</h1></td> 
    </tr> 
    <?php
        for($i = 0; $i < 10; $i++)
        { 
            echo "<tr>";
            for($j = 0; $j < 5; $j++)
            { 
                echo"<td>";
                echo $emp[$i][$j]." ";
                echo "</td>";
            }
            echo"<tr>";
        } 
    ?>
</table> 

    <form action="arrays_operations.php" method="post">
        
    <select name="select" id="">
        
        <option value="" disabled selected>
            --Select--
        </option>
        <option value="m_or_f" name="m_or_f">
            Number of male and females
        </option>
        <option value="num_students" name="num_students">
            Number of students
        </option>
        <option value="marks" name="marks">
            Fetch marks
        </option>

    </select>
        <input type="number" name="id" />
        <input type="submit" value="submit" />
    </form>
    
</body>
</html>