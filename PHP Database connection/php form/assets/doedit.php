<?php

    include_once("conn.php");

    // UPDATE `transaction` SET `ID`=[value-1],`Date`=[value-2],`Time`=[value-3],`Model`=[value-4],`Status`=[value-5] WHERE 1

    $sql = " update `$tbname` SET ";

    for($i=0;$i<count($cn);$i++){
        $sql .= '`'. $cn[$i] . '`="'.$_POST[$cn[$i]].'"' ;
        if($i!=(count($cn)-1)){
            $sql .= ", ";
        }
    }

    $sql .= " where ID = ".$_POST['ID']." ";


echo "<br><br>";
	echo $sql;
	echo "<br><br>";

    if ($conn->query($sql) === TRUE) {
        echo "New record created successfully";
        header("refresh:5;url=bedit.php");        
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }



?>