public class MacOSFactory implements GUIFactory{
    @Override
    public Button createButton() {
        return new MacOSbutton();
    }
    @Override
    public Checkbox createCheckbox() {
        return new MacOSCheckbox();
    }
    @Override
    public ScrollBar createScrollBar() {
        return new MacOSScrollBar();
    }
}