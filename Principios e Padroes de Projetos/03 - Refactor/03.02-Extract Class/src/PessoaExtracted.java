public class PessoaExtracted {
    private String nome;
    private String email;
    private String telefone;
    private Endereco end;

    public PessoaExtracted(String nome, String email, String telefone, String rua, String
            cidade, String estado, String cep) {
        this.nome = nome;
        this.email = email;
        this.telefone = telefone;
        end = new Endereco(rua, cidade, estado, cep);
    }

    public void exibirInformacoes() {
        System.out.println("Nome: " + nome);
        System.out.println("Email: " + email);
        System.out.println("Telefone: " + telefone);
        end.exibirInformacoes();
    }
}