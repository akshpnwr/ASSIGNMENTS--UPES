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

    $option = $_POST['select'];
    
    if ($option == 'm_or_f') {
        $no_of_males = 0;
        $no_of_females = 0;

        for($i = 0; $i < 10; $i++)
        { 
            for($j = 0; $j < 5; $j++)
            { 
                if ($emp[$i][$j] == 'male') {
                    $no_of_males += 1;
                }
                if ($emp[$i][$j] == 'female') {
                    $no_of_females += 1;
                }
            }
        } 

        echo '<h1>No of males : '.$no_of_males;
        echo '<br>No of females : '.$no_of_females.'</h1>';
    }

    else if ($option == 'num_students') {
        echo "<h1>Number of students : 10</h1>";
    }

    else if($option == 'marks') {
        $id = $_POST['id'];
        
        for($i = 0; $i < 10; $i++)
        { 
            for($j = 0; $j < 5; $j++)
            { 
                if ($emp[$i][$j] == $id) {
                    echo "Marks of student with id ".$id.' = '.$emp[$i][$j+3];
                }

            }
        } 


    }

?>