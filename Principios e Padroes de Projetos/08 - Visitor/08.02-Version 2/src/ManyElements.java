import java.util.ArrayList;
import java.util.List;
public class ManyElements implements Elements{
    private List<Elements> lista;
    public ManyElements() {
        lista = new ArrayList<Elements>();
    }
    public int soma(){
        int soma = 0;
        for(Elements el : lista){
            soma += el.soma();
        }
        return soma;
    }
    public List<Elements> getLista() {
        return lista;
    }
    public void setLista(List<Elements> lista) {
        this.lista = lista;
    }
    public void add(Elements el){
        lista.add(el);
    }
    public void remove(Elements el){
        lista.remove(el);
    }
}