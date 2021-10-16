<?php
$filename = "historico.txt";
if(!file_exists("historico.txt")){
    $handle = fopen("historico.txt", "w");
} else {
    $handle = fopen("historico.txt", "a");
}

fwrite($handle, $_POST['nome']);
fwrite($handle, $_POST['cpf']);

$handle = fopen("historico.txt", "r");
while (!feof($handle)) {
        $line = fgets($handle);
        echo $line ."<br>";
    }
fclose($handle);
?>