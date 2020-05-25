<!DOCTYPE html>
<html>
<body>

<?php
// Case-Sensitive
define("WELCOME", "Hello my name is John Smith");
echo WELCOME;

echo "<hr />";
// Case-Insensitive
define("WELCOME2", "Hello my name is John Smith", true);
echo welcome2;

echo "<hr />";
// Constants are Global
define("CAR", "VOLVO");

function mycar() {
    echo CAR;
}
 
mycar();

?>  

</body>
</html>