<?php
echo "Determining Browser Type";
echo $_SERVER['HTTP_USER_AGENT'];

if(strpos($_SERVER['HTTP_USER_AGENT'],"MSIE"))
{
    ECHO ("<marquee><h1>you're using the internet explorer</h1></marquee>");
}
elseif(strpos($_SERVER['HTTP_USER_AGENT'],"Mozilla")){
    ECHO ("<marquee><h1>you're using the firefox</h1></marquee>");
}
else{
    ECHO ("<marquee><h1>you're not using the internet explorer or firefox</h1></marquee>");
}
?>