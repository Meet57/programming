<?php

include_once("conn.php");

$sql = "INSERT INTO `$tbname`(";

for ($x = 1; $x < count($cn); $x++) {
    $temp = $cn[$x];
    $sql .= "`$temp`";
    if($x!=(count($cn)-1)){
        $sql .= ",";
    }
}


$sql .= ") VALUES ( ";


for ($x = 1; $x < count($cn); $x++) {
    $temp = $_POST[$cn[$x]];
    $sql .= "'$temp'";
    if($x!=(count($cn)-1)){
        $sql .= ",";
    }
}        

$sql .= ");";

echo $sql;

if ($conn->query($sql) === TRUE) {
        echo "New record created successfully";
        header("refresh:0;url=form.php");
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }



?>