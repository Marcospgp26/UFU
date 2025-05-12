public class Main {
    public static void main(String[] args) {
        GUIFactory factory;
        String os = System.getProperty("os.name").toLowerCase();
        if (os.contains("win")) {
            factory = new WindowsFactory();
        } else if(os.contains("linux")) {
            factory = new LinuxFactory();
        }
        else{
            factory = new MacOSFactory();
        }
        Application app = new Application(factory);
        app.renderUI();
    }
}
