import java.sql.*;
import java.util.*;
public class BDProduto {
    private Connection conexao;
    public BDProduto(){
        String url = "jdbc:derby:MeuBancoDeDados;create=true";
        try{
            this.conexao = DriverManager.getConnection(url);
            Statement stmt = conexao.createStatement();
// Criação da tabela PRODUTOS se não existir
            String createTableSQL = "CREATE TABLE produtos (" + "id INT PRIMARY KEY GENERATED ALWAYS AS IDENTITY (START WITH 1, INCREMENT BY 1), " + "nome VARCHAR(100), " +
                    "descricao VARCHAR(255), " +
                    "preco DECIMAL(10, 2), " +
                    "estoque INT)";
            stmt.executeUpdate(createTableSQL);
        }
        catch (Exception e) {
        }
    }

    public void cadastrarProduto(Produto produto){
        try{
            String sql = "INSERT INTO produtos (nome, descricao, preco, estoque) VALUES (?,?,?, ?)";
            PreparedStatement statement =
                    conexao.prepareStatement(sql);
            statement.setString(1, produto.getNome());
            statement.setString(2, produto.getDescricao());
            statement.setDouble(3, produto.getPreco());
            statement.setInt(4, produto.getQuantidade());
            int linhas = statement.executeUpdate();
        }
        catch(Exception e) {
        }
    }

    public ArrayList<Produto> selecionarProduto(String nome_pes){
        ArrayList<Produto> retorno = new ArrayList<Produto>();
        try {
            String sql = "select * from produtos where nome like ?";
            PreparedStatement statement =
                    conexao.prepareStatement(sql);
            statement.setString(1, nome_pes);
            ResultSet resultado = statement.executeQuery();
            while(resultado.next()){
                String ID = resultado.getString("id");
                String nome = resultado.getString("nome");
                String descricao =
                        resultado.getString("descricao");
                double preco = resultado.getDouble("preco");
                int estoque = resultado.getInt("estoque");
                Produto p = new Produto(ID, nome, descricao, preco,
                        estoque);
                retorno.add(p);
            }
        }
        catch(Exception e) {
        }
        return retorno;
    }

    public int alterarProduto(int ID, int quantidade) {
        int linhas = 0;
        try {
            String sql = "UPDATE produtos SET estoque = ? WHERE id = ?";
            PreparedStatement st = conexao.prepareStatement(sql);
            st.setInt(1, quantidade);
            st.setInt(2, ID);
            linhas = st.executeUpdate();
            if (linhas > 0) {
                System.out.println("Produto alterado com sucesso!");
            }
        } catch (Exception e) {
        }
        return linhas;
    }

    public int deletarProduto(int ID){
        int linhas = 0;
        try{
            String sql = "DELETE FROM produtos WHERE id = ?";
            PreparedStatement st = conexao.prepareStatement(sql);
            st.setInt(1,ID);
            linhas = st.executeUpdate();
            if(linhas > 0){
                System.out.println("Produto deletado com sucesso!");
            }
        }
        catch(Exception e) {
        }
        return linhas;
    }

    public void reset(){
        String sql = "DELETE FROM produtos";
        try
        {
            Statement stmt = conexao.createStatement();
            stmt.executeUpdate(sql);
        }
        catch(Exception e){
            System.out.println("Erro ao deletar produtos!");
        }
    }
}
