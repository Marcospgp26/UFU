public class Operacao extends expressaoaritmetica{
    public expressaoaritmetica op1;
    public expressaoaritmetica op2;
    public String operador;
    public Operacao(expressaoaritmetica op1, expressaoaritmetica
            op2, String operador){
        this.op1 = op1;
        this.op2 = op2;
        this.operador = operador;
    }
    @Override
    public int getresultado() {
        if(operador.equals("+")){
            return op1.getresultado()+op2.getresultado();
        }
        else if(operador.equals("-")){
            return op1.getresultado()-op2.getresultado();
        }
        else if(operador.equals("*")){
            return op1.getresultado()*op2.getresultado();
        }
        else{
            return op1.getresultado()/op2.getresultado();
        }
    }
}