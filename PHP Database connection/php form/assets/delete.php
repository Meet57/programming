<?php

    include_once("conn.php");

    // UPDATE `transaction` SET `ID`=[value-1],`Date`=[value-2],`Time`=[value-3],`Model`=[value-4],`Status`=[value-5] WHERE 1

    $sql = "delete from `$tbname` where id=".$_GET["ID"];



    if ($conn->query($sql) === TRUE) {
        echo "Delete Done";
        header("refresh:1;url=bedit.php");        
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }



?>