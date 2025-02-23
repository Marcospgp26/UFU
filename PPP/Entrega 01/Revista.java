package Entrega1;

public class Revista extends Texto{
	private String org;
	private int vol;
	private int nro;
	
	public Revista() {
		super();
		org = "";
		vol = 0;
		nro = 0;
	}
	public Revista(String titulo, String org, int ano, int vol, int nro) {
		super(titulo, ano);
		this.org = org;
		
		if(vol < 0) {
			this.vol = 0;
		}
		else {
			this.vol = vol;
		}
		
		if(nro < 0) {
			this.nro = 0;
		}
		else {
			this.nro = nro;
		}
	}
	
	public String getOrg() {
		return org;
	}
	public void setOrg(String org) {
		this.org = org;
	}
	
	public int getVol() {		return vol;
	}

	public void setVol(int vol) {
		if(vol > 0) {
			this.vol = vol;
		}
	}
	
	public int getNro() {
		return nro;
	}
	public void setNro(int nro) {
		if(nro > 0) {
			this.nro = nro;
		}
	}

	public String retornaInfo() {
		return("Revista: " + super.retornaInfo() + " " + this.org + " " + this.vol + " " + this.nro + " " + super.getAno());
	}
}

