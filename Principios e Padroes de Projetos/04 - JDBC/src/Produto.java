public class Produto {
    private String ID;
    private String nome;
    private String descricao;
    private double preco;
    private int quantidade;
    Produto(String nome, String descricao, double preco, int
            quantidade) {
        this.nome = nome;
        this.descricao = descricao;
        setPreco(preco);
        setQuantidade(quantidade);
    }
    Produto(String ID, String nome, String descricao, double preco,
            int quantidade) {
        this.ID = ID;
        this.nome = nome;
        this.descricao = descricao;
        setPreco(preco);
        setQuantidade(quantidade);
    }
    public String retornaInfo(){
        return this.ID + " " + this.nome + " " + this.descricao + " " + this.preco + " " + this.quantidade;
    }
    public String getID() {
        return ID;
    }
    public String getNome() {
        return nome;
    }
    public String getDescricao() {
        return descricao;
    }
    public double getPreco() {
        return preco;
    }
    public int getQuantidade() {
        return quantidade;
    }
    public void setID(String ID) {
        this.ID = ID;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }
    public void setPreco(double preco) {
        if(preco < 0){
            this.preco = 0;
        }
        else{
            this.preco = preco;
        }
    }
    public void setQuantidade(int quantidade) {
        if(this.quantidade < 0){
            this.quantidade = 0;
        }
        else{
            this.quantidade = quantidade;
        }
    }
}