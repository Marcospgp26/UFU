public class ContaBancariaRefatored {
    private double saldo;
    private double taxaDeJuros;
    public ContaBancariaRefatored(double saldo, double taxaDeJuros) {
        this.saldo = saldo;
        this.taxaDeJuros = taxaDeJuros;
    }
    public double getSaldo() {
        return saldo;
    }
    public double getTaxaDeJuros() {
        return taxaDeJuros;
    }
    public double calcularJuros() {
        return getSaldo() * getTaxaDeJuros();
    }
}
