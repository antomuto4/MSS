#pragma once
#include "include.h"

sf::RenderWindow window(sf::VideoMode(1280, 720), "Dev Build"); /*, sf::Style::Titlebar | sf::Style::Close);*/

namespace win{
    void resolution(unsigned int X, unsigned int Y){
        window.setSize(sf::Vector2u(X, Y));
    }
}