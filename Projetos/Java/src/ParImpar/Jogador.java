package ParImpar;

import java.util.Scanner;

public class Jogador {

    private int escolha;
    private int jogada;
    private String nome;
    Scanner input = new Scanner(System.in);

    public int getEscolha() {
        return escolha;
    }

    public int getJogada() {
        return jogada;
    }

    public String getNome() {
        return nome;
    }

    public void setJogada() {
        this.jogada = input.nextInt();
    }

    public void setJogada(int jogada) {
        this.jogada = jogada;
        System.out.print("Faça sua jogada"+this.jogada);

    }

    public void setNome() {
        System.out.println("Diga o seu nome: ");
        this.nome = input.next();
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setEscolha() {

        do {
            System.out.println("Faça sua escolha");
            System.out.println("[0]Par [1]Impar");

            this.jogada = input.nextInt();
        } while (0 != this.escolha && this.escolha != 1);

        if (0 == this.escolha) {
            System.out.println(this.nome + " escolheu PAR");
        } else {
            System.out.println(this.nome + " escolheu IMPAR");
        }

        System.out.println(this.nome + " escolheu " + this.escolha);
    }

    public void setEscolha(int escolha) {
        if (1 == escolha) {
            this.escolha = 0;
        } else {
            this.escolha = 1;
        }

        if (0 == this.escolha) {
            System.out.println(this.nome + " escolheu PAR");
        } else {
            System.out.println(this.nome + " escolheu IMPAR");
        }
    }
    
    public void infoGanhador(String nome, int Jogada){

        if(0 == (this.jogada+jogada)%2){
            System.out.println("PARR");
        } else{
            System.out.println("IMPAR");
        }
    }

}
