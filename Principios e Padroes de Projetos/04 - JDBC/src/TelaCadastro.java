import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class TelaCadastro {
    private BDProduto banco;
    private JFrame frameMenu;
    private JDialog popUp;
    private JPanel panel;
    private JTextField textoNome;
    private JTextField textoDescricao;
    private JTextField textoPreco;
    private JTextField textoQuantidade;
    private JLabel labelNome;
    private JLabel labelDescricao;
    private JLabel labelPreco;
    private JLabel labelQuantidade;
    private JButton buttonSalvar;
    private JButton buttonCancelar;

    public TelaCadastro(JFrame frameMenu, BDProduto banco) {
        this.frameMenu = frameMenu;
        this.banco = banco;

        popUp = new JDialog(frameMenu, "Cadastro", true);
        popUp.setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
        popUp.setSize(300,300);
        popUp.setLocationRelativeTo(null);

        panel = new JPanel();
        popUp.getContentPane().add(panel);
        panel.setLayout(null);

        labelNome = new JLabel("Nome:");
        labelNome.setBounds(10, 45, 80, 25);
        panel.add(labelNome);

        labelDescricao = new JLabel("Descricao:");
        labelDescricao.setBounds(10, 75, 80, 25);
        panel.add(labelDescricao);

        labelPreco = new JLabel("Preco:");
        labelPreco.setBounds(10, 105, 80, 25);
        panel.add(labelPreco);

        labelQuantidade = new JLabel("Quantidade:");
        labelQuantidade.setBounds(10, 135, 80, 25);
        panel.add(labelQuantidade);

        textoNome = new JTextField();
        textoNome.setBounds(100,45,165,25);
        panel.add(textoNome);

        textoDescricao = new JTextField();
        textoDescricao.setBounds(100,75,165,25);
        panel.add(textoDescricao);

        textoPreco = new JTextField();
        textoPreco.setBounds(100,105,165,25);
        panel.add(textoPreco);

        textoQuantidade = new JTextField();
        textoQuantidade.setBounds(100,135,165,25);
        panel.add(textoQuantidade);

        buttonSalvar = new JButton("Salvar");
        buttonSalvar.setBounds(10,195,80,25);
        panel.add(buttonSalvar);

        buttonCancelar = new JButton("Cancelar");
        buttonCancelar.setBounds(140,195,100,25);
        panel.add(buttonCancelar);

        buttonSalvar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String nome, descricao, preco, quantidade;
                nome = textoNome.getText();
                descricao = textoDescricao.getText();
                preco = textoPreco.getText();
                quantidade = textoQuantidade.getText();
                if(nome.isBlank() || descricao.isBlank() ||
                        preco.isBlank() || quantidade.isBlank()) {
                    JOptionPane.showMessageDialog(null, "Algum campo esta vazio", "Erro", JOptionPane.ERROR_MESSAGE);
                }
                else {
                    int quantidadeInt = 0;
                    double precoDouble = 0;
                    boolean saida = true;
                    try{
                        quantidadeInt =
                                Integer.parseInt(quantidade);
                        precoDouble = Double.parseDouble(preco);
                        if(quantidadeInt <0 || precoDouble < 0){
                            throw new RuntimeException();
                        }
                    }
                    catch(Exception e1){
                        saida = false;
                        JOptionPane.showMessageDialog(null, "Algum campo numerico é inválido", "Erro", JOptionPane.ERROR_MESSAGE);
                    }
                    if(saida){
                        Produto p = new Produto(nome, descricao,
                                precoDouble, quantidadeInt);
                        banco.cadastrarProduto(p);
                        JOptionPane.showMessageDialog(null, "Produto cadastrado!", null, JOptionPane.INFORMATION_MESSAGE);
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
