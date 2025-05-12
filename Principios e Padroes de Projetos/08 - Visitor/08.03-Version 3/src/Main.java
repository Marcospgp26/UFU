import java.util.ArrayList;
import java.util.List;
public class Main {
    public static void main(String[] args) {
        TwoElement two1 = new TwoElement(3,3);
        TwoElement two2 = new TwoElement(2,7);
        ThreeElement three1 = new ThreeElement(3,4,5);

        List<NumberElement> numberElements = new
                ArrayList<NumberElement>();
        numberElements.add(two1);
        numberElements.add(two2);
        numberElements.add(three1);

        System.out.println("Visiting elements with SumVisitor");
        NumberVisitor sumVisitor = new SumVisitor();
        sumVisitor.visit(numberElements);

        System.out.println("Visiting elements with TotalSumVisitor");
        TotalSumVisitor totalSumVisitor = new TotalSumVisitor();
        totalSumVisitor.visit(numberElements);

        System.out.println("Total sum: " +
                totalSumVisitor.getTotalSum());
        System.out.println("Visiting elements with MultVisitor");
        MultVisitor multVisitor = new MultVisitor();
        multVisitor.visit(numberElements);

        System.out.println("Visiting elements with TotalMultVisitor");
        TotalMultVisitor totalMultVisitor = new TotalMultVisitor();
        totalMultVisitor.visit(numberElements);

        System.out.println("Total sum: " +
                totalMultVisitor.getTotalSumMult());
    }
}