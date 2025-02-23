package Entrega1;

import java.awt.BorderLayout;
import java.util.ArrayList;

import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JScrollPane;

public class TelaListagem {
	
	public TelaListagem(ArrayList<Midia> m, JFrame janelaPrincipal) {
		//Criando a tela de listagem (não permite mexer nas demais enquanto não for fechada)
		JDialog janelaLista = new JDialog(janelaPrincipal, "Listagem", true);
		janelaLista.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		janelaLista.setSize(400,400);
		janelaLista.setLocationRelativeTo(null);
				
		JLabel titulo = new JLabel("Listagem");
				
		//Selecionando a informação de cada elemento
		ArrayList<String> lista = new ArrayList<String>();
		for(Midia t : m) {
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
}
