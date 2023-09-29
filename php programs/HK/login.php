<?php
 
$a="abc";
$b="abc";
if(($_REQUEST['data1']==$a) && ($_REQUEST['data2']==$b))
    {
    echo "your are successfully login";
    }
else
    {
    echo "Invalid loginId or Password";
    }


 echo $_REQUEST['data1'];
 echo "<br>";
 echo $_REQUEST['data2'];

?>