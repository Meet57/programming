<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Php Form</title>
</head>
<body>
    

    <?php
        include_once("conn.php");
 
        $sql = 'SELECT * FROM '.$tbname.' where ID = '.$_GET["ID"].'';

        $result = $conn->query($sql);
        $rows = $result->fetch_all(MYSQLI_ASSOC);

        $data = array();
        if($result->num_rows > 0) {
            foreach ($rows as $row) {
                foreach ($row as $value) {  
                    array_push($data,$value);
                }
            }
        }
    ?>

    <form method="POST" action="doedit.php">
        <table>

            <?php
                for($i=0;$i<(count($data));$i++){
                    ?>
                        <tr>
                            <td><b><?php echo $cn[$i];?></b></td>
                            <?php 
                                if($cn[$i]=="Id" or $cn[$i]=="ID" or $cn[$i]=="id"){
                                    echo '<td><input type="text" name="'.$cn[$i].'" value="'.$data[$i].'" readonly></td>';
                                    continue;
                                }
                            ?>
                            <td><input type="text" name="<?php echo $cn[$i];?>" value="<?php echo $data[$i];?>"></td>
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