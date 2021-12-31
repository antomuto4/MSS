#pragma once
#include "include.h"

sf::RenderWindow window(sf::VideoMode(1280, 720), "Window"); /*, sf::Style::Titlebar | sf::Style::Close);*/

namespace win{
    void resolution(unsigned int X, unsigned int Y, std::string Title){
        window.setSize(sf::Vector2u(X, Y));
		window.setTitle(Title);
    }
}

namespace camera{
	sf::View view;
	void setSize(float x, float y){
		view.setSize(x, y);
	}
}
