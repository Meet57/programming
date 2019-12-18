<?php
  $servername = "localhost";
  $username = "root";
  $password = "";
  $db = "meet";

  // Create connection
  $conn = new mysqli($servername, $username, $password, $db);
  // Check connection
  if ($conn->connect_error) {
      die("Connection failed: " . $conn->connect_error);
  }

  // Create database
  $sql = "drop database meet";
  if ($conn->query($sql) === TRUE) {
      echo "successfully";
  } else {
      echo "<b>Error : </b>" . $conn->error;
  }

  $conn->close();
?>
