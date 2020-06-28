<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Php Form</title>
</head>
<body>
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
    ?>

    <?php
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

    <form method="post">
        <table>

            <?php
                foreach($cn as $col){
                    if($col=="Id" or $col=="ID" or $col=="id"){
                        continue;
                    }
                    ?>
                        <tr>
                            <th><?php echo $col;?></th>
                            <td><input type="text" name="<?php echo $col;?>"></td>
                        </tr>
                    <?php
                }
            ?>


            <tr>
                <td colspan="2">
                    <input type="submit" name="submit" style="width:100%">
                </td>
            </tr>
        </table>
    </form>
</body>
</html>


<?php
    if($_POST[$cn[1]] != ""){
        if(isset($_POST["submit"])){
                    
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
    
            if($_POST[$cn[1]] != ""){
                if ($conn->query($sql) === TRUE) {
                    echo "New record created successfully";
                } else {
                    echo "Error: " . $sql . "<br>" . $conn->error;
                }
            }else{
                echo "Fill details";
            }
    
        }
        else{
            echo "error";
        }
    }else{
        echo "fill details";
    }
?>