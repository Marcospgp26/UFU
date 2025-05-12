import java.util.ArrayList;
import java.util.List;
public class Main {
    public static void main(String[] args) {
        int localSum;
        int totalSum = 0;
        TwoElement two1 = new TwoElement(3,3);
        TwoElement two2 = new TwoElement(2,7);
        ThreeElement three1 = new ThreeElement(3,4,5);
        ManyElements numberElements= new ManyElements();
        numberElements.add(two1);
        numberElements.add(two2);
        numberElements.add(three1);
        System.out.println("Adding elements in ManyElements");
        localSum = numberElements.soma();
        System.out.println("Sum of elements in ManyElements: "
                +localSum);
        System.out.println("Visiting elements with totalSum");
        localSum = numberElements.soma();
        totalSum += localSum;
        System.out.println("Sum of elements with totalSum: " +totalSum);
    }
}
