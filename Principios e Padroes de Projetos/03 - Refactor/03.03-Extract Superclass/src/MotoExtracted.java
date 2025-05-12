public class MotoExtracted extends Veiculo {
    public MotoExtracted(String modelo, String marca, int ano) {
        super(modelo, marca, ano);
    }

    public void ligar() {
        System.out.print("Ligando a moto");
        super.ligar();
    }
}