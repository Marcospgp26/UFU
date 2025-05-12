package spaceinvaders.sprite;

import spriteframework.Commons;
import spriteframework.sprite.Player;

import java.awt.event.KeyEvent;

public class PlayerSpaceInvaders extends Player {
    public PlayerSpaceInvaders() {
        loadImage("/images/player.png");
        getImageDimensions();
        resetState(Commons.INIT_PLAYER_X,Commons.INIT_PLAYER_Y);
    }
    @Override
    public void act(){
        x += dx;

        if (x <= 2) {

            x = 2;
        }

        if (x >= Commons.BOARD_WIDTH - 2 * super.getWidth()) {

            x = Commons.BOARD_WIDTH - 2 * super.getWidth();
        }
    }

    @Override
    public void keyPressed(KeyEvent e){
        int key = e.getKeyCode();

        if (key == KeyEvent.VK_LEFT) {

            dx = -2;
        }

        if (key == KeyEvent.VK_RIGHT) {

            dx = 2;
        }
    }

    public void keyReleased(KeyEvent e) {

        int key = e.getKeyCode();

        if (key == KeyEvent.VK_LEFT) {

            dx = 0;
        }

        if (key == KeyEvent.VK_RIGHT) {

            dx = 0;
        }
    }
}
