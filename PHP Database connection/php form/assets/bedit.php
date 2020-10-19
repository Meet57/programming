<?php
	include_once("conn.php");	


	// Create connection
	$conn = mysqli_connect($servername, $username, $password, $dbname);
	// Check connection
	if ($conn->connect_error) {
		die("Connection failed: " . $conn->connect_error);
	}

	$sql = "SELECT * FROM `$tbname`";

	$result = $conn->query($sql);
	$rows = $result->fetch_all(MYSQLI_ASSOC);


	if($result->num_rows > 0) {
		echo '<table border = 5><tr><th></th><th></th>';
		foreach ($rows[0] as $columnName => $value) {
			echo '<th>' . $columnName . '</th>';
		}
		echo '</tr>';
		foreach ($rows as $row) {
	  	echo "<tr>";
			echo ' <td><a href="edit.php?ID='.$row["ID"].'"><button>Edit</button></a></td> ';
			echo ' <td><a href="delete.php?ID='.$row["ID"].'"><button>Delete</button></a></td> ';
			foreach ($row as $value) {
				echo '<td>' . $value . '</td>';
			}
		}
		echo '</table>';
	}

	$conn->close();
?>
