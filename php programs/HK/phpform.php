<?php
    echo "Dumping form data";
    echo "<br>";
    echo "Here is the data from the form:";
    echo"<br";
    foreach($_REQUEST as $key => $value){
        if(is_array($value)){
            foreach($value as $item){
                echo $key," =>",$item,"<br>";
            }
        }
        else{
            echo $key," =>",$value,"<br>";
        }
    }
?>