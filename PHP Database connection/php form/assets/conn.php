<?php
        // Turn off all error reporting
        error_reporting(0);
        $servername = "localhost";
        $username = "root";
        $password = "";
        $dbname = "shop";
        $tbname = "janki";
        
        // Create connection
        $conn = mysqli_connect($servername, $username, $password, $dbname);
        // Check connection
        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }

        $sql = "SELECT * FROM $tbname";
	
        $result = $conn->query($sql);
        $rows = $result->fetch_all(MYSQLI_ASSOC);
    
        $cn = array();
        if($result->num_rows > 0) {
            foreach ($rows[0] as $columnName => $value) {
                array_push($cn,$columnName);
            }
        }
?>