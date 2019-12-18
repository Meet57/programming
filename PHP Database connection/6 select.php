<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "meet";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT id, firstname, lastname FROM MyGuests";
$result = $conn->query($sql);

//the function num_rows() checks if there are more than zero rows returned.
if ($result->num_rows > 0) {
    // output data of each row
    //the function fetch_assoc() puts all the results into an associative array that we can loop through.
    while($row = $result->fetch_assoc()) {
        echo "id: " . $row["id"]. " - Name: " . $row["firstname"]. " " . $row["lastname"]. "<br>";
    }
} else {
    echo "0 results";
}
$conn->close();
?>
