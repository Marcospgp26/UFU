public class Livro extends Midia{
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
        String[] s = super.retornaInfo().split(" ");

        return ("Livro: " + s[0] + " " + this.autor + " " + s[1]);
    }
}