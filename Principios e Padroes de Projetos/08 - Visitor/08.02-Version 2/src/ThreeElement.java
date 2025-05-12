public class ThreeElement implements Elements {
    private int a;
    private int b;
    private int c;
    public ThreeElement(int a, int b, int c) {
        setA(a);
        setB(b);
        setC(c);
    }
    public int soma(){
        System.out.println(a + "+" + b + "+" +c+ "=" + (a+b+c));
        return a + b +c;
    }
    public int getA() {
        return a;
    }
    public int getB() {
        return b;
    }
    public int getC() {
        return c;
    }
    public void setA(int a) {
        this.a = a;
    }
    public void setB(int b) {
        this.b = b;
    }
    public void setC(int c) {
        this.c = c;
    }
}
