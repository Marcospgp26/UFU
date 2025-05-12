public class NumericOperand extends expressaoaritmetica{
    private int valor;
    public NumericOperand(int valor){
        this.valor = valor;
    }
    public double getValor(){
        return valor;
    }
    public void setValor(int valor){
        this.valor = valor;
    }
    @Override
    public int getresultado() {
        return valor;
    }
}