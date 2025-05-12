import java.util.List;

public class PedidoExtracted {
    private String cliente;
    private List<Double> itens;
    public PedidoExtracted(String cliente, List<Double> itens) {
        this.cliente = cliente;
        this.itens = itens;
    }
    public void processarPedido() {
        System.out.println("Processando pedido para o cliente: " +
                cliente);
        double subtotal = calculoSubtotal();
// Cálculo do desconto
        double desconto = calculoDesconto(subtotal);
// Cálculo do imposto
        double imposto = calculoImposto(subtotal, desconto);
// Cálculo do total final
        double total = calculoTotal(subtotal, desconto, imposto);
// Exibição do recibo
        System.out.println("Subtotal: R$" + subtotal);
        System.out.println("Desconto: R$" + desconto);
        System.out.println("Imposto: R$" + imposto);
        System.out.println("Total: R$" + total);
    }
    private double calculoTotal(double subtotal, double desconto, double
            imposto) {
        double total = subtotal - desconto + imposto;
        return total;
    }
    private double calculoImposto(double subtotal, double desconto) {
        double imposto = (subtotal - desconto) * 0.08;
        return imposto;
    }
    private double calculoDesconto(double subtotal) {
        double desconto = 0;
        if (subtotal > 100) {
            desconto = subtotal * 0.1;
        }
        return desconto;
    }
    private double calculoSubtotal() {
// Cálculo do subtotal
        double subtotal = 0;
        for (double item : itens) {
            subtotal += item;
        }
        return subtotal;
    }
}