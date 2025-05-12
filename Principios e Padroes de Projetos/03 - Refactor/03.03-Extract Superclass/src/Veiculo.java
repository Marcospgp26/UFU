public abstract class Veiculo {
    private String modelo;
    private String marca;
    private int ano;

    public Veiculo(String modelo, String marca, int ano) {
        this.modelo = modelo;
        this.marca = marca;
        this.ano = ano;
    }

    public void ligar() {
        System.out.println(modelo);
    }
}