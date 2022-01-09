#include "include.h"
sf::Text text;
sf::Text info;

namespace d_text{
    void Dialogue(sf::String t_string){
        text.setString(t_string);
		int size = t_string.getSize();

		text.setPosition(window.getSize().x / 2.1 - size * 2, window.getSize().y / 80);
    }
    void Description(sf::String t_string){ // change this to (sf::Sprite object, sf::String t_string)
        //if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) /* and interacts with object*/{
        info.setString(t_string);
        int size = t_string.getSize();
        info.setPosition( window.getSize().x / 2.3, window.getSize().y / 3);
        //}
    }
}

