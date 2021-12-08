<?php

if($_SERVER["REQUEST_METHOD"] == "POST"){
    session_start();
    if(empty(!$_POST['nome']) and  empty(!$_POST['nome'])){
        $_SESSION['loggedin'] = TRUE;
        header("location: welcome.php");
    } else {
        $_SESSION['loggedin'] = FALSE;
    }
}

if(isset($_POST['nome']) && isset($_POST['cpf'])){
    $filename = "historico.txt";
    if(!file_exists("historico.txt")){
        $handle = fopen("historico.txt", "w");
    } else {
        $handle = fopen("historico.txt", "a");
    }

    fwrite($handle, $_POST['nome'].PHP_EOL);
    fwrite($handle, $_POST['cpf'].PHP_EOL.PHP_EOL);

    fclose($handle);
    } else {

    }
?>
 
<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Acessar</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; }
        .wrapper{ width: 350px; padding: 20px; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>Acessar</h2>
        <p>Favor inserir nome e CPF.</p>
        <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            <div class="form-group">
                <label>Nome</label>
                <input type="text" name="nome" class="form-control" value="">
                <span class="help-block"></span>
            </div>    
            <div class="form-group">
                <label>CPF</label>
                <input type="text" name="cpf" class="form-control" value="">
                <span class="help-block"></span>
            </div>
            <div class="form-group">
                <input type="submit" class="btn btn-primary" value="Acessar">
            </div>
        </form>
    </div>    
</body>
</html>