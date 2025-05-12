import javax.swing.*;
import java.util.ArrayList;
public class TelaListaSelecionados {
    private JDialog pop_up;
    private JDialog frame;
    private JList<String> lista;
    public TelaListaSelecionados(JDialog frame, ArrayList<Produto>
            a_p) {
        this.frame = frame;
        pop_up = new JDialog(frame, "Lista de Produtos", true);
        pop_up.setSize(300, 300);
        pop_up.setLocationRelativeTo(null);
        ArrayList<String> a = new ArrayList<String>();
        for(Produto p: a_p){
            a.add(p.retornaInfo());
        }
        lista = new JList<String>(a.toArray(new String[0]));
        JScrollPane pane = new JScrollPane();
        pane.setViewportView(lista);
        pop_up.add(pane);
        pop_up.setVisible(true);
    }
}