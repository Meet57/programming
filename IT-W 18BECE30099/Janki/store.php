<?php
    $servername = "localhost";
    $username = "id11937044_root";
    $password = "root123";
    $dbname = "id11937044_test";

    $c = $_GET['company'];
	$r = $_GET['ram'];
	$m = $_GET['model'];
	$s = $_GET['stock'];
	$p = $_GET['p'];

    // Create connection
    $conn = mysqli_connect($servername, $username, $password, $dbname);
    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    
    $sql = "INSERT INTO `Janki`(`company`, `ram`, `model`, `stock`, `price`) VALUES ('$c','$r','$m','$s','$p')";

    if ($conn->query($sql) === TRUE) {
        echo "New record created successfully";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
?>
