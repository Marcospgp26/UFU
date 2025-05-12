public class CarroExtracted extends Veiculo{

    public CarroExtracted(String modelo, String marca, int ano){
        super(modelo, marca, ano);
    }

    public void ligar(){
        System.out.println("Ligando o carro ");
        super.ligar();
    }
}
