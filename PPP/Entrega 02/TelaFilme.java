package Entrega1;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class TelaFilme extends BaseTela {
	
	protected JLabel label4;
	protected JLabel label5;
	
	protected JTextField texto4;
	protected JTextField texto5;
	
	public TelaFilme(ArrayList<Midia> a) {
		super(a);
		
		//Selecionando o espaço dos labels novos e os nomes dos antigos
		titulo.setText("Filmes");
		label2.setText("Autor:");
		label3.setText("Dur.:");
		
		label4 = new JLabel("Nota:");
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
		botao4.setText("Revistas");
		
		//Definindo a funcionalidade dos botoes
		botao1.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				
				String titulo, autor, dur, nota, ano;
				titulo = texto1.getText();
				autor = texto2.getText();
				dur = texto3.getText();
				nota = texto4.getText();
				ano = texto5.getText();
				
				String s[] = {titulo, autor, dur, nota, ano};
				String num[] = {ano};
				String num_doub[] = {dur, nota};
 				
				if(verificador.VerificaVazio(s)) {
					JOptionPane.showMessageDialog(null, "Existem atributo(s) vazios", "Aviso", JOptionPane.WARNING_MESSAGE);
				}
				else if(verificador.VerificaNumero(num) || verificador.VerificaNumeroDouble(num_doub)) {
					JOptionPane.showMessageDialog(null, "Valores numericos invalidos", "Aviso", JOptionPane.WARNING_MESSAGE);
				}
				else {
					
					int[] argumentos = {Integer.parseInt(ano)};
					int[] liminf = {0};
					int[] limsup = {2025};
					
					double[] argumentos2 = {Double.parseDouble(dur), Double.parseDouble(nota)};
					double[] liminf2 = {0,0};
					double[] limsup2 = {Double.MAX_VALUE, 5};
					
					
					if(verificador.VerificaLimite(argumentos, liminf, limsup) || verificador.VerificaLimite(argumentos2, liminf2, limsup2)) {
						JOptionPane.showMessageDialog(null, "Valores numericos invalidos", "Aviso", JOptionPane.WARNING_MESSAGE);
					}
					else {
						Filme r = new Filme(titulo, autor, argumentos[0], argumentos2[0], argumentos2[1]);
						array.add(r);
						JOptionPane.showMessageDialog(null, "Filme inserido", "Aviso", JOptionPane.INFORMATION_MESSAGE);
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
		
		janela.setVisible(true);
	}

}
