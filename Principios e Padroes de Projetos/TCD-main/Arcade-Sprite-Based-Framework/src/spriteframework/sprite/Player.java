package spriteframework.sprite;

import javax.swing.ImageIcon;

import spriteframework.Commons;

import java.awt.event.KeyEvent;

public abstract class Player extends Sprite {

    private int width;

    protected int getWidth() {
        return width;
    }
    protected void setWidth(int width) {
        this.width = width;
    }

    protected void loadImage (String imagePath) {
        ImageIcon ii = new ImageIcon(this.getClass().getResource(imagePath));
        width = ii.getImage().getWidth(null);
        setImage(ii.getImage());
    }
    
    public abstract void act();

    public abstract void keyPressed(KeyEvent e);

    public abstract void keyReleased(KeyEvent e);

    protected void resetState(int INITx, int INITy) {

        setX(INITx);
        setY(INITy);
    }
}
