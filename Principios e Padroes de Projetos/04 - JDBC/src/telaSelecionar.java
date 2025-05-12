import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
public class telaSelecionar {
    private BDProduto bd;
    private JFrame frameMenu;
    private JDialog popUp;
    private JPanel panel;
    private JTextField texto_nome;
    private JLabel label_nome;
    private JButton confirmar;
    private JButton cancelar;
    public telaSelecionar(JFrame tela, BDProduto bd) {
        this.bd = bd;
        this.frameMenu = tela;
        popUp = new JDialog(frameMenu, "Selecionar Produtos",
                true);
        popUp.setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
        popUp.setSize(300,200);
        popUp.setLocationRelativeTo(null);
        panel = new JPanel();
        popUp.getContentPane().add(panel);
        panel.setLayout(null);
        label_nome = new JLabel("Nome:");
        label_nome.setBounds(10, 45, 80, 25);
        panel.add(label_nome);
        texto_nome = new JTextField();
        texto_nome.setBounds(100,45,165,25);
        panel.add(texto_nome);
        confirmar = new JButton("Confirmar");
        confirmar.setBounds(10, 105, 100, 25);
        panel.add(confirmar);
        cancelar = new JButton("Cancelar");
        cancelar.setBounds(140, 105, 100, 25);
        panel.add(cancelar);
        confirmar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String nome = texto_nome.getText();
                if(nome.isBlank()) {
                    JOptionPane.showMessageDialog(null, "Campo vazio", "Erro", JOptionPane.ERROR_MESSAGE);
                }
                else {
                    ArrayList<Produto> a_p = new
                            ArrayList<Produto>();
                    a_p = bd.selecionarProduto(nome);
                    TelaListaSelecionados tela = new TelaListaSelecionados(popUp, a_p);
                }
            }
        });
        cancelar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                popUp.dispose();
            }
        });
        popUp.setVisible(true);
    }
}