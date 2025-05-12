public class TwoElement implements Elements{
    private int a;
    private int b;
    public TwoElement(int a, int b){
        setA(a);
        setB(b);
    }
    public int soma(){
        System.out.println(a + "+" + b + "=" + (a+b));
        return a + b;
    }
    public int getA(){
        return a;
    }
    public int getB(){
        return b;
    }
    public void setA(int a){
        this.a = a;
    }
    public void setB(int b){
        this.b = b;
    }
}
