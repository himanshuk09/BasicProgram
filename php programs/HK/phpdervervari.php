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
    echo "you have accessed ",$_SERVER['PHP_SELF'];
    ECHO "<BR>","on server ",$_SERVER['SERVER_PORT'];
    ECHO "<BR>";
    ECHO $_SERVER['HTTP_USER_AGENT'];
    ?>
</body>
</html>