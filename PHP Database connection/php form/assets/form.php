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
    ?>

    <form method="post" action="submit.php">
        <table>

            <?php
                foreach($cn as $col){
                    if($col=="Id" or $col=="ID" or $col=="id"){
                        continue;
                    }
                    ?>
                        <tr>
                            <td><b><?php echo $col;?></b></td>
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