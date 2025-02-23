package Entrega1;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

import javax.swing.JOptionPane;

public class TelaLivro extends BaseTela{
	  
	public TelaLivro(ArrayList<Midia> a) {
		super(a);
		
		//Modificando os labels
		titulo.setText("Livros");
		label2.setText("Autor:");
		label3.setText("Ano:");
		
		//Modificando os botoes
		botao2.setText("Revistas");
		botao4.setText("Filmes");
		
		//Criando actionListeners para os botões
		botao1.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				
				String titulo, autor, ano;
				titulo = texto1.getText();
				autor = texto2.getText();
				ano = texto3.getText();
				String s[] = {titulo, autor, ano};
				String num[] = {ano};
				
				if(verificador.VerificaVazio(s)) {
					JOptionPane.showMessageDialog(null, "Existem atributo(s) vazios", "Aviso", JOptionPane.WARNING_MESSAGE);
				}
				else if(verificador.VerificaNumero(num)) {
					JOptionPane.showMessageDialog(null, "Valores numericos invalidos", "Aviso", JOptionPane.WARNING_MESSAGE);
				}
				else {
					
					int[] argumentos = {Integer.parseInt(ano)};
					int[] liminf = {0};
					int[] limsup = {2025};
					
					
					if(verificador.VerificaLimite(argumentos, liminf, limsup)) {
						JOptionPane.showMessageDialog(null, "Valores numericos invalidos", "Aviso", JOptionPane.WARNING_MESSAGE);
					}
					else {
						Livro l = new Livro(titulo, argumentos[0], autor);
						array.add(l);
						JOptionPane.showMessageDialog(null, "Livro inserido", "Aviso", JOptionPane.INFORMATION_MESSAGE);
					}
					
				}
				
			}
			
		});

		botao2.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				janela.dispose();
				TelaRevista t = new TelaRevista(array);
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