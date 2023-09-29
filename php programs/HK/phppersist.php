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
        $first_name=isset($_REQUEST['first'])?$_REQUEST["first"]:"";
        $last_name=isset($_REQUEST['last'])?$_REQUEST["last"]:"";
        echo "<form  method='post'>";
        echo "Enter your first name";
        echo "<br>";
        echo "<input type='text' name='first' value='", $first_name,"'>";
        echo "<br>";
        echo "Enter your last name";
        echo "<br>";
        echo "<input type='text' name='last' value='", $last_name,"'>";
        echo "<br>";
        echo "<input type='submit' value='submit'>";
       echo  "<input type='hidden' name='welcome_already_seen' value='already_seen'>";
       echo "</form>";
    }
    function check_data()
    {
       global $error_arrray;
       if($_REQUEST["first"]=="")
       {
        $error_arrray[]="<font color='red'> please enter your first name </font>";
       }
       if($_REQUEST["last"]=="")
       {
        $error_arrray[]="<font color='red'> please enter your last name </font>";
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
          echo "Here is your first name:";
          echo $_REQUEST["first"];
          echo "<br>Here is your last name:";
          echo $_REQUEST["last"];
    }
    ?>
</body>
</html>