import java.util.List;
public class TotalMultVisitor implements NumberVisitor{
    int totalSumMult = 0;
    @Override
    public void visit(TwoElement twoElement) {
        int mult = twoElement.a * twoElement.b;
        System.out.println(twoElement.a + " * " + twoElement.b + " = " + mult + "to total");
        totalSumMult += mult;
    }
    @Override
    public void visit(ThreeElement threeElement) {
        int mult = threeElement.a * threeElement.b * threeElement.c;
        System.out.println(threeElement.a + " * " + threeElement.b + " * " + threeElement.c + " = " + mult + "to total");
                totalSumMult += mult;
    }
    @Override
    public void visit(List<NumberElement> elementList){
        for(NumberElement element : elementList){
            element.accept(this);
        }
    }
    public int getTotalSumMult() {
        return totalSumMult;
    }
}
