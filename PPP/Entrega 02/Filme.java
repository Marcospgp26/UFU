package Entrega1;

public class Filme extends Midia {
	
	private String autor;
	private double duracao;
	private double nota;
	
	public Filme(String titulo, String autor, int ano, double duracao, double nota) {
		super(titulo, ano);
		
		this.autor = autor;
		this.setNota(nota);
		this.setDuracao(duracao);
	}

	
	public String getAutor() {
		return autor;
	}

	
	public void setAutor(String autor) {
		this.autor = autor;
	}

	public double getDuracao() {
		return duracao;
	}

	public void setDuracao(double duracao) {
		if(duracao < 0) {
			this.duracao = 0;
		}
		else {
			this.duracao = duracao;
		}
	}


	public double getNota() {
		return nota;
	}

	public void setNota(double nota) {
		if(nota < 0 || nota > 5) {
			nota = 0;
		}
		else
		{
			this.nota = nota;
		}
	}
	
	public String retornaInfo() {
		String[] s = super.retornaInfo().split(" ");
		
		return ("Filme: " + s[0] + " " + this.autor + " " + duracao + " " + nota + " " +s[1]);
	}
}
