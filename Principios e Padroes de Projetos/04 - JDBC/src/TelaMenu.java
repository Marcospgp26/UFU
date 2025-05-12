import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class TelaMenu {
    private BDProduto bd;
    private JFrame frame;
    private JPanel panel;
    private JButton botaoCadastrar;
    private JButton botaoSelecionar;
    private JButton botaoAlterar;
    private JButton botaoDeletar;

    public TelaMenu(BDProduto bd) {
        this.bd = bd;
        frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setSize(180,220);
        panel = new JPanel();
        panel.setLayout(null);
        frame.add(panel);
        botaoCadastrar = new JButton("Cadastrar Produto");
        botaoCadastrar.setBounds(10,25,150,25);
        botaoSelecionar = new JButton("Selecionar Produto");
        botaoSelecionar.setBounds(10,65,150,25);
        botaoAlterar = new JButton("Alterar Produto");
        botaoAlterar.setBounds(10,105,150,25);
        botaoDeletar = new JButton("Deletar Produto");
        botaoDeletar.setBounds(10,145,150,25);
        panel.add(botaoCadastrar);
        panel.add(botaoSelecionar);
        panel.add(botaoAlterar);
        panel.add(botaoDeletar);
        botaoCadastrar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                TelaCadastro t = new TelaCadastro(frame, bd);
            }
        });
        botaoSelecionar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                telaSelecionar t = new telaSelecionar(frame,bd);
            }
        });
        botaoAlterar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                telaAlterar t = new telaAlterar(frame,bd);
            }
        });
        botaoDeletar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                telaDeletar t = new telaDeletar(frame,bd);
            }
        });

        frame.setVisible(true);
    }
}

