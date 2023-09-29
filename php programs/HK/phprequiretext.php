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
    $error_arrray=array();
    if(isset($_REQUEST["welcome_already_seen"]))
    {
        check_data();
        if(count($error_arrray)!=0)
        {
            show_errors();
            show_welcome();
        }
        else{
            handle_data();
        }
    }
    else{
        show_welcome();
    }
    function show_welcome()
    {
        echo "<form  method='post'>";
        echo "What is your favorite ice cream flavor?";
        echo "<br>";
        echo "<br>";
        echo "<input type='text' name='flavor' >";
        echo "<br>";
        echo "<br>";
        echo "<input type='submit' value='submit'>";
       echo  "<input type='hidden' name='welcome_already_seen' value='already_seen'>";
       echo "</form>";
    }
    function check_data()
    {
       global $error_arrray;
       if(!preg_match('/pistachio/i',$_REQUEST['flavor']))
       {
           $error_arrray[]="<font color='red'> yourfavorite flavor should be \"pistachio\".</font>";
       }
    }
    function show_errors()
    {
        global $error_arrray;
        foreach($error_arrray as $err)
        echo $err,"<br>";
    }
  
    function handle_data()
    {
          echo "your favorite ice creme flavor is  ";
          echo $_REQUEST["flavor"];
    }
    ?>
</body>
</html>