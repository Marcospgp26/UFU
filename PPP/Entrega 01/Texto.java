package Entrega1;

public abstract class Texto {
	
	private String titulo;
	private int ano;
	
	public Texto() {
		this.titulo =  "";
		this.ano = 0;
	}
	
	public Texto(String titulo, int ano) {
		this.titulo = titulo;
		if(ano > 2025) {
			this.ano = 0;
		}
		else {
			this.ano = ano;
		}
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
		return (this.titulo);
	}
	
}
