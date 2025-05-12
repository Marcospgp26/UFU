import javax.swing.*;

import java.awt.BorderLayout;
import java.awt.event.*;
import java.util.ArrayList;

public class Telas {

    ArrayList<Texto> textos;

    public Telas() {
        textos = new ArrayList<Texto>();
        telaLivro();
    }

    public void telaLivro() {

        //Criando a janela
        JFrame janela = new JFrame();
        janela.setSize(400,300);
        janela.setLocationRelativeTo(null);
        janela.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        //Definindo o painel
        JPanel painel = new JPanel();
        janela.add(painel);
        painel.setLayout(null);

        //Criando e adicionando os Labels
        JLabel labelLivros = new JLabel("Livros");
        labelLivros.setBounds(173,5,80,25);
        painel.add(labelLivros);

        JLabel labelTitulo = new JLabel("Titulo:");
        labelTitulo.setBounds(10,45,80,25);
        painel.add(labelTitulo);

        JTextField textoTitulo = new JTextField();
        textoTitulo.setBounds(100,45,165,25);
        painel.add(textoTitulo);

        JLabel labelAutor = new JLabel("Autor:");
        labelAutor.setBounds(10,75,80,25);
        painel.add(labelAutor);

        JTextField textoAutor = new JTextField();
        textoAutor.setBounds(100,75,165,25);
        painel.add(textoAutor);

        JLabel labelAno = new JLabel("Ano:");
        labelAno.setBounds(10,105,80,25);
        painel.add(labelAno);

        JTextField textoAno = new JTextField();
        textoAno.setBounds(50,105,40,25);
        painel.add(textoAno);

        //Criando, definindo e adicionando os botões
        JButton BotaoIncluir = new JButton("Incluir");
        BotaoIncluir.setBounds(10,165,80,25);
        painel.add(BotaoIncluir);

        //Action Listener do primeiro botão
        BotaoIncluir.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String titulo, autor,ano = new String();
                boolean salvar_valores = true;

                titulo = textoTitulo.getText();
                autor = textoAutor.getText();
                ano = textoAno.getText();

                //erro: primeiros dois campos estão vazios ou cheios de espaço/tab
                if(titulo.isBlank() || autor.isBlank() || ano.isBlank()) {
                    JOptionPane.showMessageDialog(null, "Algum campo está vazio.", "Aviso", JOptionPane.WARNING_MESSAGE);
                }

                else {

                    int ano_livro = 0;
                    try {
                        ano_livro = Integer.parseInt(ano);
                    }
                    catch(Exception e1){
                        salvar_valores = false;
                        JOptionPane.showMessageDialog(null, "Por favor forneça um ano.", "Aviso", JOptionPane.WARNING_MESSAGE);
                    }

                    if(salvar_valores) {
                        if(ano_livro > 2025 || ano_livro < 0) {
                            JOptionPane.showMessageDialog(null, "Ano invalido", "Aviso", JOptionPane.WARNING_MESSAGE);
                        }
                        else {
                            Livro l = new Livro(titulo, ano_livro, autor);
                            textos.add(l);
                        }
                    }
                }
            }
        });


        JButton BotaoRevistas = new JButton("Revistas");
        BotaoRevistas.setBounds(140,165,100,25);
        painel.add(BotaoRevistas);

        BotaoRevistas.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                janela.dispose();
                telaRevista();

            }
        });

        JButton BotaoListagem = new JButton("Listagem");
        BotaoListagem.setBounds(260,165,100,25);
        painel.add(BotaoListagem);

        BotaoListagem.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                telaLista(janela);

            }
        });

        janela.setVisible(true);
    }

    public void telaRevista() {

        //Criando a janela
        JFrame janela = new JFrame();
        janela.setSize(400,300);
        janela.setLocationRelativeTo(null);
        janela.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        //Definindo o painel
        JPanel painel = new JPanel();
        janela.add(painel);
        painel.setLayout(null);

        //Criando e adicionando os Labels
        JLabel labelLivros = new JLabel("Revistas");
        labelLivros.setBounds(173,5,80,25);
        painel.add(labelLivros);

        JLabel labelTitulo = new JLabel("Titulo:");
        labelTitulo.setBounds(10,45,80,25);
        painel.add(labelTitulo);

        JTextField textoTitulo = new JTextField();
        textoTitulo.setBounds(100,45,165,25);
        painel.add(textoTitulo);

        JLabel labelOrg = new JLabel("Org.:");
        labelOrg.setBounds(10,75,80,25);
        painel.add(labelOrg);

        JTextField textoOrg = new JTextField();
        textoOrg.setBounds(100,75,165,25);
        painel.add(textoOrg);

        JLabel labelVol = new JLabel("Vol:");
        labelVol.setBounds(10,105,80,25);
        painel.add(labelVol);

        JTextField textoVol = new JTextField();
        textoVol.setBounds(50,105,40,25);
        painel.add(textoVol);

        JLabel labelNro = new JLabel("Nro.:");
        labelNro.setBounds(110,105,80,25);
        painel.add(labelNro);

        JTextField textoNro = new JTextField();
        textoNro.setBounds(150,105,40,25);
        painel.add(textoNro);

        JLabel labelAno = new JLabel("Ano:");
        labelAno.setBounds(210,105,80,25);
        painel.add(labelAno);

        JTextField textoAno = new JTextField();
        textoAno.setBounds(250,105,40,25);
        painel.add(textoAno);


        //Criando, definindo e adicionando os botões
        JButton BotaoIncluir = new JButton("Incluir");
        BotaoIncluir.setBounds(10,165,80,25);
        painel.add(BotaoIncluir);

        //Action Listener do primeiro botão
        BotaoIncluir.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String titulo, org,vol,nro,ano = new String();
                boolean salvar_valores = true;

                titulo = textoTitulo.getText();
                org = textoOrg.getText();
                vol = textoVol.getText();
                nro = textoNro.getText();
                ano = textoAno.getText();

                //erro: primeiros dois campos estão vazios ou cheios de espaço/tab
                if(titulo.isBlank() || org.isBlank() || vol.isBlank() || nro.isBlank() || ano.isBlank()) {
                    JOptionPane.showMessageDialog(null, "Algum campo está vazio.", "Aviso", JOptionPane.WARNING_MESSAGE);
                }

                else {

                    int vol_rev = 0, nro_rev = 0, ano_rev = 0;
                    try {
                        vol_rev = Integer.parseInt(vol);
                        nro_rev = Integer.parseInt(nro);
                        ano_rev = Integer.parseInt(ano);
                    }
                    catch(Exception e1){
                        salvar_valores = false;
                        JOptionPane.showMessageDialog(null, "Um ou mais dos seguintes atributos: vol, ano e org não são numeros inteiros", "Aviso", JOptionPane.WARNING_MESSAGE);
                    }

                    if(salvar_valores) {
                        if(ano_rev > 2025 || ano_rev < 0) {
                            JOptionPane.showMessageDialog(null, "Ano invalido", "Aviso", JOptionPane.WARNING_MESSAGE);
                        }
                        else if(nro_rev < 0) {
                            JOptionPane.showMessageDialog(null, "Nro invalido", "Aviso", JOptionPane.WARNING_MESSAGE);
                        }
                        else if(vol_rev < 0) {
                            JOptionPane.showMessageDialog(null, "Vol invalido", "Aviso", JOptionPane.WARNING_MESSAGE);
                        }
                        else {
                            Revista r = new Revista(titulo, org, ano_rev, vol_rev, nro_rev);
                            textos.add(r);
                        }
                    }
                }
            }
        });


        JButton BotaoLivros = new JButton("Livros");
        BotaoLivros.setBounds(140,165,100,25);
        painel.add(BotaoLivros);

        BotaoLivros.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                janela.dispose();
                telaLivro();

            }
        });

        JButton BotaoListagem = new JButton("Listagem");
        BotaoListagem.setBounds(260,165,100,25);
        painel.add(BotaoListagem);

        BotaoListagem.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                telaLista(janela);

            }
        });

        janela.setVisible(true);
    }

    public void telaLista(JFrame janelaPrincipal) {

        //Criando a tela de listagem (não permite mexer nas demais enquanto não for fechada)
        JDialog janelaLista = new JDialog(janelaPrincipal, "Listagem", true);
        janelaLista.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        janelaLista.setSize(400,400);
        janelaLista.setLocationRelativeTo(null);

        JLabel titulo = new JLabel("Listagem");

        //Selecionando a informação de cada elemento
        ArrayList<String> lista = new ArrayList<String>();
        for(Texto t : textos) {
            lista.add(t.retornaInfo());
        }

        //Criando o JList com ScrollPane
        JList<String> lista_mostrada = new JList<String>(lista.toArray(new String[0]));
        JScrollPane scroll = new JScrollPane();
        scroll.setViewportView(lista_mostrada);


        //Arrumando e deixando visivel a tela
        janelaLista.add(titulo, BorderLayout.NORTH);
        janelaLista.add(scroll,BorderLayout.CENTER);
        janelaLista.setVisible(true);
    }

    public static void main(String[] args) {

        Telas t = new Telas();
    }
}