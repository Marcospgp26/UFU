package spaceinvaders.sprite;

import spriteframework.sprite.Player;
import spriteframework.sprite.PlayerFactory;

public class PlayerFactorySpaceInvaders implements PlayerFactory {
    public Player createPlayer(){
        return new PlayerSpaceInvaders();
    }
}
