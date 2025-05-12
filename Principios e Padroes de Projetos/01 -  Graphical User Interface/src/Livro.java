public class Livro extends Texto{
    private String autor;

    public Livro() {
        super();
        autor = "";
    }

    public Livro(String titulo, int ano, String autor) {
        super(titulo, ano);
        this.autor = autor;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String retornaInfo() {
        return ("Livro: " + super.retornaInfo() + " " + this.autor + " " + this.getAno());
    }
}