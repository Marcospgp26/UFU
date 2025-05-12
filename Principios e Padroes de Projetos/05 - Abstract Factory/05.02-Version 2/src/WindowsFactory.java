public class WindowsFactory implements GUIFactory {
    @Override
    public Button createButton() {
        return new Windowsbutton();
    }
    @Override
    public Checkbox createCheckbox() {
        return new WindowsCheckBox();
    }
    @Override
    public ScrollBar createScrollBar() {
        return new WindowsScrollBar();
    }
}
