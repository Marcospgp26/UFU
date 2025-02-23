package Entrega1;

public abstract class Midia {
	
	private String titulo;
	private int ano;
	
	public Midia() {
		this.titulo =  "";
		this.ano = 0;
	}
	
	public Midia(String titulo, int ano) {
		this.titulo = titulo;
		this.setAno(ano);
	}
	
	public String getTitulo() {
		return titulo;
	}
	
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	
	public int getAno() {
		return ano;
	}
	
	public void setAno(int ano) {
		if(ano <= 2025) {
			this.ano = ano;
		}
	}
	
	public String retornaInfo() {
		return  titulo + " " + ano;
	}
	
}
