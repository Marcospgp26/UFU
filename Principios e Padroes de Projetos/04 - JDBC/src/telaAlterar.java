import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class telaAlterar {
    private BDProduto bd;
    private JFrame frame;
    private JDialog popUp;
    private JPanel panel;
    private JLabel labelID;
    private JLabel LabelQuantidade;
    private JTextField textoID;
    private JTextField textoQuantidade;
    private JButton buttonAlterar;
    private JButton buttonCancelar;
    
    public telaAlterar(JFrame frame, BDProduto bd) {
        this.frame = frame;
        this.bd = bd;

        popUp = new JDialog(frame, "Alterar Dados", true);
        popUp.setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
        popUp.setSize(300,300);
        popUp.setLocationRelativeTo(null);

        panel = new JPanel();
        popUp.getContentPane().add(panel);
        panel.setLayout(null);

        labelID = new JLabel("ID:");
        labelID.setBounds(10, 45, 80, 25);
        panel.add(labelID);

        LabelQuantidade = new JLabel("Quantidade:");
        LabelQuantidade.setBounds(10, 75, 80, 25);
        panel.add(LabelQuantidade);

        textoID = new JTextField();
        textoID.setBounds(100,45,165,25);
        panel.add(textoID);

        textoQuantidade = new JTextField();
        textoQuantidade.setBounds(100,75,165,25);
        panel.add(textoQuantidade);

        buttonAlterar = new JButton("Salvar");
        buttonAlterar.setBounds(10,135,80,25);
        panel.add(buttonAlterar);

        buttonCancelar = new JButton("Cancelar");
        buttonCancelar.setBounds(140,135,100,25);
        panel.add(buttonCancelar);

        buttonAlterar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String id = textoID.getText();
                String quantidade = textoQuantidade.getText();
                if(id.isBlank() || quantidade.isBlank()) {
                    JOptionPane.showMessageDialog(null, "Algum campo esta vazio", "Erro", JOptionPane.ERROR_MESSAGE);
                }
                else {
                    int idInt = 0;
                    int quantidadeInt = 0;
                    boolean saida = true;
                    try{
                        idInt = Integer.parseInt(id);
                        quantidadeInt =
                                Integer.parseInt(quantidade);
                        if(quantidadeInt < 0 || idInt < 0) {
                            throw new RuntimeException();
                        }
                    }
                    catch(Exception ex) {
                        saida = false;
                        JOptionPane.showMessageDialog(popUp, "Algum campo está inválido", "Erro", JOptionPane.ERROR_MESSAGE);
                    }
                    if(saida){
                        int qnt = bd.alterarProduto(idInt,
                                quantidadeInt);
                        if(qnt > 0)
                            JOptionPane.showMessageDialog(popUp, "Produto alterado!", null,
                                    JOptionPane.INFORMATION_MESSAGE);
                        else JOptionPane.showMessageDialog(popUp,
                                "Produto não encontrado!", "Erro", JOptionPane.ERROR_MESSAGE);
                    }
                }
            }
        });
        buttonCancelar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                popUp.dispose();
            }
        });
        popUp.setVisible(true);
    }
}

