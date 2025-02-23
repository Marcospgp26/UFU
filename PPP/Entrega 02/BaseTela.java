package Entrega1;

import javax.swing.*;
import java.util.ArrayList;

public abstract class BaseTela {
	
	protected ArrayList<Midia> array;
	protected VerificaErros verificador;
	
	protected JFrame janela;
	protected JPanel painel;
	
	protected JLabel titulo;
	protected JLabel label1;
	protected JLabel label2;
	protected JLabel label3;
	
	protected JTextField texto1;
	protected JTextField texto2;
	protected JTextField texto3;
	
	protected JButton botao1;
	protected JButton botao2;
	protected JButton botao3;
	protected JButton botao4;
	
	public BaseTela(ArrayList<Midia> a) {
		
		//Criando o verificador
		verificador = new VerificaErros();
		
		//Criando o Array
		array = a;
		
		//Criando a janela
		janela = new JFrame();
		janela.setSize(400,300);
		janela.setLocationRelativeTo(null);
		janela.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
				
		//Definindo o painel
		painel = new JPanel();
		janela.add(painel);
		painel.setLayout(null);
		
		//Definindo a localizacao dos labels
		titulo = new JLabel("");
		titulo.setBounds(173,5,80,25);
		painel.add(titulo);
		
		label1 = new JLabel("Titulo:");
		label1.setBounds(10,45,80,25);
		painel.add(label1);
		
		label2 = new JLabel("");
		label2.setBounds(10,75,80,25);
		painel.add(label2);
		
		label3 = new JLabel("");
		label3.setBounds(10,105,80,25);
		painel.add(label3);
		
		
		//Definindo a localizacao dos TextFields
		texto1 = new JTextField();
		texto1.setBounds(100,45,165,25);
		painel.add(texto1);
		
		texto2 = new JTextField();
		texto2.setBounds(100,75,165,25);
		painel.add(texto2);
		
		texto3 = new JTextField();
		texto3.setBounds(50,105,40,25);
		painel.add(texto3);
		
		//Definindo a localizacao dos Botoes
		botao1 = new JButton("Incluir");
		botao1.setBounds(10,165,80,25);
		painel.add(botao1);
		
		botao2 = new JButton("");
		botao2.setBounds(140,165,100,25);
		painel.add(botao2);
		
		botao3 = new JButton("Listagem");
		botao3.setBounds(260,165,100,25);
		painel.add(botao3);
		
		botao4 = new JButton("");
		botao4.setBounds(140,195,100,25);
		painel.add(botao4);
		
	}
}
