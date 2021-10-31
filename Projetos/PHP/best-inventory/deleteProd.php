<?php

session_start();

        
    if(!is_null($_POST['idProduto'])){
        
        //banco de dados
        require_once('dados_banco.php');
   
        $idProduto = $_POST['idProduto'];

        // Criar Conexão
        $conn = new mysqli($servername, $username, $password, $dbname);

        // Checar Conexão
        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }
        //variavel que recebe o id informado
        $sql = "DELETE FROM produto 
        WHERE idProduto = '$idProduto'";

        if ($conn->query($sql) === TRUE) {
        echo("Produto deletado!");
        } else {
            echo "Error: " . $sql . "<br>" . $conn->error;
        }

        $conn->close();

    }
?>

<!DOCTYPE html>
<html lang="pt_BR">

<head>
    <meta charset="UTF-8">
    <title>Best-Inventory: Página Inicial</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <link rel="stylesheet" href="">
    <link rel="stylesheet" href="estilo.css">
</head>

<body class="fundo"> 
<div class="conteudo">
        <h1 style="text-align: center;"><b>Deletar produto</b></h1>
        <h3 style="text-align: center;">Informe o código do produto a ser deletado:</h3>

        <div class="d-flex justify-content-center py-5">
        <div class="inicial justify-content-center">
            <div class="wrapper">
                <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
                


                        
                        <div class="form-group col-sm-3"
                            style="padding-left: 0px">
                                <label>Cód.</label>
                                <input type="text" name="idProduto" class="form-control" id="idProduto">
                                <span class="help-block"></span>
                            </div>

                        <div class="form-group" style="padding-top: 22px">
                            <div class="d-flex justify-content-center">
                                <input type="submit" class="btn btn-success" value="Deletar">
                                <a href="menu.php" class="btn btn-danger">Ir para menu</a>
                            </div>
                        </div>

                </form>
            </div>
    </div>
    </div>
</div>


</body>

</html>