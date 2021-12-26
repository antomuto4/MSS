#pragma once
#include "include.h"

sf::RenderWindow window(sf::VideoMode(1280, 720), "Window"); /*, sf::Style::Titlebar | sf::Style::Close);*/

namespace win{
    void Create(unsigned int X, unsigned int Y, sf::String title){
        window.setSize(sf::Vector2u(X, Y));
        window.setTitle(title);
    }

    sf::Vector2u size = window.getSize();
    unsigned int width = size.x;
    unsigned int height = size.y;


}
