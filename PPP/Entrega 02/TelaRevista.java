package Entrega1;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

import javax.swing.*;

public class TelaRevista extends BaseTela {
	
	protected JLabel label4;
	protected JLabel label5;
	
	protected JTextField texto4;
	protected JTextField texto5;
	
	public TelaRevista(ArrayList<Midia> a) {
		super(a);
		
		//Selecionando o espaço dos labels novos e os nomes dos antigos
		titulo.setText("Revistas");
		label2.setText("Org.:");
		label3.setText("Vol.:");
		
		label4 = new JLabel("Nro.:");
		label4.setBounds(110,105,40,25);
		painel.add(label4);
		
		label5 = new JLabel("Ano:");
		label5.setBounds(210,105,80,25);
		painel.add(label5);
		
		
		//Definindo os demais TextFields
		texto4 = new JTextField();
		texto4.setBounds(150,105,40,25);
		painel.add(texto4);
		
		texto5 = new JTextField();
		texto5.setBounds(250,105,40,25);
		painel.add(texto5);
		
		//Definindo os nomes dos botoes
		botao2.setText("Livros");
		botao4.setText("Filmes");
		
		//Definindo a funcionalidade dos botoes
		botao1.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				
				String titulo, org, vol, nro, ano;
				titulo = texto1.getText();
				org = texto2.getText();
				vol = texto3.getText();
				nro = texto4.getText();
				ano = texto5.getText();
				
				String s[] = {titulo, org, vol, nro, ano};
				String num[] = {vol, nro, ano};
				
				if(verificador.VerificaVazio(s)) {
					JOptionPane.showMessageDialog(null, "Existem atributo(s) vazios", "Aviso", JOptionPane.WARNING_MESSAGE);
				}
				else if(verificador.VerificaNumero(num)) {
					JOptionPane.showMessageDialog(null, "Valores numericos invalidos", "Aviso", JOptionPane.WARNING_MESSAGE);
				}
				else {
					
					int[] argumentos = {Integer.parseInt(vol), Integer.parseInt(nro), Integer.parseInt(ano)};
					int[] liminf = {0, 0, 0};
					int[] limsup = {Integer.MAX_VALUE, Integer.MAX_VALUE, 2025};
					
					
					if(verificador.VerificaLimite(argumentos, liminf, limsup)) {
						JOptionPane.showMessageDialog(null, "Valores numericos invalidos", "Aviso", JOptionPane.WARNING_MESSAGE);
					}
					else {
						Revista r = new Revista(titulo, org, argumentos[2], argumentos[0], argumentos[1]);
						array.add(r);
						JOptionPane.showMessageDialog(null, "Revista inserida", "Aviso", JOptionPane.INFORMATION_MESSAGE);
					}
					
				}
				
			}
			
		});

		botao2.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				janela.dispose();
				TelaLivro l = new TelaLivro(array);
			}
			
		});
		
		botao3.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				TelaListagem t = new TelaListagem(array, janela);
			}
			
		});
		
		botao4.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				janela.dispose();
				TelaFilme t = new TelaFilme(array);
			}
			
		});
		
		janela.setVisible(true);

	}
	
}
