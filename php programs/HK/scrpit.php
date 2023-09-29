<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>client side validation</title>
    <script language="javascript">
         function check_data()
         {
             var regexp= /^(\d{1,2})\/(d{1,2})\/(d{4})$/
             var result= document.form1.data.value.match(regexp);
             if(result==null)
             {
                 alert("please enter a date in (dd/mm/yyyy)formate");
                document.form1.date.value=" ";
                return false;
             }
             else {
                 document.form1.submit();
                 return true;
             }
         }

    </script>
</head>
<body>
    
</body>
</html>