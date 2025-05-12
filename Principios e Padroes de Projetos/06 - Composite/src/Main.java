public class Main {
    public static void main(String[] args) {

        expressaoaritmetica n1 = new NumericOperand(0);
        System.out.println(n1.getresultado());

        n1 = new NumericOperand(1);
        expressaoaritmetica n2 = new NumericOperand(2);
        expressaoaritmetica op1 = new Operacao(n1,n2, "+");
        System.out.println(op1.getresultado());

        n1 = new NumericOperand(1);
        n2 = new NumericOperand(2);
        expressaoaritmetica n3 = new NumericOperand(3);
        op1 = new Operacao(n2,n3, "+");
        expressaoaritmetica op2 = new Operacao(n1,op1,"*");
        System.out.println(op2.getresultado());

        n1 = new NumericOperand(2);
        n2 = new NumericOperand(3);
        n3 = new NumericOperand(4);
        expressaoaritmetica n4 = new NumericOperand(5);
        expressaoaritmetica n5 = new NumericOperand(3);
        op1 = new Operacao(n4,n5,"-");
        op2 = new Operacao(n3,op1,"/");
        expressaoaritmetica op3 = new Operacao(n1,n2,"*");
        expressaoaritmetica op4 = new Operacao(op3,op2,"+");
        System.out.println(op4.getresultado());
    }
}