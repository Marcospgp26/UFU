public class Moto {
    private String modelo;
    private String marca;
    private int ano;

    public Moto(String modelo, String marca, int ano) {
        this.modelo = modelo;
        this.marca = marca;
        this.ano = ano;
    }

    public void ligar() {
        System.out.println("Ligando a moto " + modelo);
    }
}