#include "include.h"
sf::Text text;
sf::Text info;
namespace d_text{
    void dialogue(sf::String t_string){
        text.setString(t_string);
        text.setPosition( window.getSize().x / 2.3, window.getSize().y / 3);
    }
    void description(sf::String t_string){ // change this to (sf::Sprite object, sf::String t_string)
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) /* and interacts with object*/{
        info.setString(t_string);
        int size = t_string.getSize();
        info.setPosition( window.getSize().x / 2 - size*5.5, window.getSize().y / 1.3 );
        }
    }
}