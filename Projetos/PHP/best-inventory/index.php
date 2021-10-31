<?php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    session_start();
    if ($_POST['username'] == 'wendell' and $_POST['password'] == 'senha1234') {
        $_SESSION['loggedin'] = TRUE;
        $_SESSION["username"] = 'Wendell Guariento';
        header("location: menu.php");
    } else {
        $_SESSION['loggedin'] = FALSE;
    }
}
?>

<!DOCTYPE html>
<html lang="pt_BR">

<head>
    <meta charset="UTF-8">
    <title>Acessar</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-uWxY/CJNBR+1zjPWmfnSnVxwRheevXITnMqoEIeG1LJrdI0GlVs/9cVSyPYXdcSF" crossorigin="anonymous">
    <link rel="stylesheet" href="estilo.css">
</head>

<body class="fundo">
    <div class="d-flex justify-content-center py-5 conteudo">
        <div class="justify-content-center">
            <div class="wrapper">
                <h1 style="text-align: center"
                >Best-Inventory</h1>
                <h5 style="text-align: center;
                padding-bottom: 5px"
                >Informe usuario e senha</h5>

                <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">


                    <div class="form-group py-3">
                        <label><h5>Usuario</h5></label>
                        <input type="text" name="username" class="form-control" value="">
                        <span class="help-block"></span>
                    </div>
                    

                    <div class="form-group">
                        <label><h5>Senha</h5></label>
                        <input type="password" name="password" class="form-control" value="">
                        <span class="help-block"></span>
                    </div>


                    <div class="form-group">
                        <div class="d-flex justify-content-center"
                        style="padding-top: 20px">
                            <input style="width: 200px"
                            type="submit" class="btn btn-success" value="Acessar">
                        </div>
                    </div>


                </form>
            </div>

        </div>
    </div>


</body>

</html>