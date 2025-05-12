public class Pessoa {
    private String nome;
    private String email;
    private String telefone;
    private String rua;
    private String cidade;
    private String estado;
    private String cep;
    public Pessoa(String nome, String email, String telefone, String rua, String
            cidade, String estado, String cep) {
        this.nome = nome;
        this.email = email;
        this.telefone = telefone;
        this.rua = rua;
        this.cidade = cidade;
        this.estado = estado;
        this.cep = cep;
    }
    public void exibirInformacoes() {
        System.out.println("Nome: " + nome);
        System.out.println("Email: " + email);
        System.out.println("Telefone: " + telefone);
        System.out.println("Endereço: " + rua + ", " + cidade + ", " + estado + " - " + cep);
    }
}
