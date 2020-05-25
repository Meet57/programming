<?php
	$servername = "localhost";
	$username = "id11937044_root";
	$password = "root123";
	$dbname = "id11937044_test";
	
	// Create connection
	$conn = mysqli_connect($servername, $username, $password, $dbname);
	// Check connection
	if ($conn->connect_error) {
		die("Connection failed: " . $conn->connect_error);
	}
    
    function plus($id){
        alert("up");
        $id = $_GET["id"];

	    // sql to delete a record
	    $sql = "UPDATE Janki 
			SET stock = stock + 1
			WHERE id = $id ";

	    $conn->query($sql);
    }

    function down($id){
        $id = $_GET["id"];

	    // sql to delete a record
	    $sql = "UPDATE Janki 
			SET stock = stock - 1
			WHERE id = $id ";

	    $conn->query($sql);
    }

	$sql = 'SELECT * from `Janki`';
	$result = $conn->query($sql);
	$rows = $result->fetch_all(MYSQLI_ASSOC);
	
	echo '
      <style>
            button{
                width:100px;
                height:40px;
            }
            table {
              width:100%;
            }
            table, th, td {
              border: 1px solid black;
              border-collapse: collapse;
            }
            th, td {
              padding: 15px;
              text-align: left;
            }
            table#t01 tr:nth-child(even) {
              background-color: #eee;
            }
            table#t01 tr:nth-child(odd) {
             background-color: #fff;
            }
            table#t01 th {
              background-color: black;
              color: white;
            }
        </style>
	';
    
	if($result->num_rows > 0) {
		echo '<table border = 5 cellspacing="1" cellpadding="1"><tr>';
		foreach ($rows[0] as $columnName => $value) {
			echo '<th>' . $columnName . '</th>';
		}
		echo '</tr>';
		foreach ($rows as $row) {
			echo '<tr>';
			foreach ($row as $value) {
				echo '<td  width="100" style="text-align:center" >' . $value . '</td>';
			}
			echo '<td><a href="'.$s.'"><button style="background-color: #ff4000; font-size: 24px;" onclick="plus($row["id"])">-</button></a></td>';
			echo '<td><a href="'.$s.'"><button style="background-color: #80ff00; font-size: 24px;" onclick="down($row["id"])">+</button></a></td>';
			echo '<td><a href="'.$s.'"><button >Update</button></a></td>';
			echo '<tr>';
		}
		echo '</table>';
	}
	$conn->close();
?>
