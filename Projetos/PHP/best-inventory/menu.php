<?php
session_start();
if (!isset($_SESSION["loggedin"]) || $_SESSION["loggedin"] !== true) {
    header("location: index.php");
    exit;
} else {

    /*Envia para o arquivo alunos_cadastrados.txt*/
    if (isset($_POST['log'])) {
        header("location: relatorioProd.txt");
    }
}

?>

<!DOCTYPE html>
<html lang="pt_BR">

<head>
    <meta charset="UTF-8">
    <title>Best-Inventory: Página Inicial</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <link rel="stylesheet" href="">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="stylesheet" href="estilo.css">


</head>

<body>
    <div class="d-flex justify-content-center py-5 fundo">
        <div class="justify-content-center conteudo">
            <p>
                <div class="btn-group">
                    <h1>Bem-vindo ao <b>Best-Inventory</b></h1>
                    <h4>O seu sistema de gerenciamento de estoque!</h4>

                    <div class="botoes">
                        <a href="insertProd.php" class="btn btn-primary botao">Cadastrar novos produtos</a>
                        <a href="updateProd.php" class="btn btn-primary botao">Atualizar produtos</a>
                        <a href="deleteProd.php" class="btn btn-primary botao">Remover produto</a>
                        <a href="sair.php" class="btn btn-danger botao">Sair</a>
                    </div>
                </div>
            </p>
        </div>
    </div>
</body>

</html>