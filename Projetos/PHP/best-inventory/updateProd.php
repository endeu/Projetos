<?php

session_start();

        
    if(!is_null($_POST['nomeProd'])){

        //banco de dados
        require_once('dados_banco.php');

        
        $nomeProd = $_POST['nomeProd'];
        $fabricante = $_POST['fabricante'];
        $qtde = $_POST['qtde'];        
        $idProduto = $_POST['idProduto'];

        // Criar Conexão
        $conn = new mysqli($servername, $username, $password, $dbname);

        // Checar Conexão
        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }
        //variavel que recebe o id informado
        $sql = "UPDATE produto SET nomeProd='$nomeProd', fabricante='$fabricante', qtde='$qtde'
        WHERE idProduto=$idProduto";

        if ($conn->query($sql) === TRUE) {
        echo("Produto alterado com sucesso!");
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
    </style>

</head>

<body class="fundo">
<div class="conteudo">
        
        <h1 style="text-align: center;"><b>Alterar produto</b></h1>
        <h4 style="text-align: center;">Informe o código do produto e os campos a serem alterados</h4>
        <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            
        <div class="d-flex justify-content-center py-5">
            <div class="inicial justify-content-center">
                <div class="wrapper">
                    <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
                        
                        <div class="linha">
                        <div class="form-group col-sm-3"
                            style="padding-left: 0px">
                                <label>Cód.</label>
                                <input type="text" name="idProduto" class="form-control" id="idProduto">
                                <span class="help-block"></span>
                            </div>

                            <div class="form-group col-sm-9"
                            style="padding-left: 0px;
                            padding-right: 0px">
                                <label> Nome do produto</label>
                                <input type="text" name="nomeProd" class="form-control" id="nomeProd" placeholder="Ex: Alicate">
                                <span class="help-block"></span>
                            </div>
                        </div>


                        <div class="linha">
                            <div class="form-group col-sm-10"
                            style="padding-left: 0px;">
                                <label>Fabricante</label>
                                <input type="text" name="fabricante" class="form-control" id="fabricante" placeholder="Ex: Gedore">
                                <span class="help-block"></span>
                            </div>

                            <div class="form-group col-sm-2"
                            style="padding-left: 0px;
                            padding-right: 0px">
                                <label>Qtde.</label>
                                <input type="text" name="qtde" class="form-control" id="qtde">
                                <span class="help-block"></span>
                            </div>
                        </div>
                        <div class="form-group">
                            <div class="d-flex justify-content-center">
                                <input type="submit" class="btn btn-success" value="Alterar">
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