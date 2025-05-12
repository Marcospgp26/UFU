public class Application {
    GUIFactory fabrica;
    Button botao;
    Checkbox checkbox;
    ScrollBar scrollBar;
    public Application(GUIFactory fabrica) {
        this.fabrica = fabrica;
        this.botao = fabrica.createButton();
        this.checkbox = fabrica.createCheckbox();
        this.scrollBar = fabrica.createScrollBar();
    }
    public void renderUI(){
        botao.paint();
        checkbox.paint();
        scrollBar.paint();
    }
}