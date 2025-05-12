import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class telaDeletar {

    private JDialog popUp;
    private JFrame frame;
    private JPanel panel;
    private JLabel LabelId;
    private JTextField textoID;
    private JButton buttonDeletar;
    private JButton buttonCancelar;
    private BDProduto bd;

    public telaDeletar(JFrame frame, BDProduto bd) {
        this.frame = frame;
        this.bd = bd;
        popUp = new JDialog(frame, "Deletar Produto", true);
        popUp.setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
        popUp.setSize(300,200);
        popUp.setLocationRelativeTo(null);

        panel = new JPanel();
        popUp.getContentPane().add(panel);
        panel.setLayout(null);

        LabelId = new JLabel("ID:");
        LabelId.setBounds(10, 45, 80, 25);
        panel.add(LabelId);

        textoID = new JTextField();
        textoID.setBounds(100,45,165,25);
        panel.add(textoID);

        buttonDeletar = new JButton("Deletar");
        buttonDeletar.setBounds(10,105,80,25);
        panel.add(buttonDeletar);

        buttonCancelar = new JButton("Cancelar");
        buttonCancelar.setBounds(140,105,100,25);
        panel.add(buttonCancelar);

        buttonDeletar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String Id = textoID.getText();
                int IdInt;
                try{
                    IdInt = Integer.parseInt(Id);
                    if(IdInt < 0) throw new ArithmeticException();
                    int qnt = bd.deletarProduto(IdInt);
                    if(qnt > 0) JOptionPane.showMessageDialog(popUp,
                            "Produto deletado!", null, JOptionPane.INFORMATION_MESSAGE);
                    else JOptionPane.showMessageDialog(popUp,
                            "Produto não encontrado!", "Erro", JOptionPane.ERROR_MESSAGE);
                }
                catch (Exception ex){
                    JOptionPane.showMessageDialog(frame, "Valor de Id Invalido", null, JOptionPane.ERROR_MESSAGE);
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

