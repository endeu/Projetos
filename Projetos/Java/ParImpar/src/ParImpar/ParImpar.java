package ParImpar;

public class ParImpar {

    public static void main(String[] args) {
        
        Jogador User = new Jogador();
        Jogador Pc = new Jogador();
        
        User.setNome();
        Pc.setNome("Computador");
        
        User.setEscolha();
        Pc.setEscolha(User.getEscolha());
      
        User.setJogada();
        Pc.setJogada((int) (Math.random()*10));
        
        User.infoGanhador(Pc.getNome(), Pc.getJogada()
        );
        
       
    }
}