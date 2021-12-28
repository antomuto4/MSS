#pragma once
#include "include.h"

sf::RenderWindow window(sf::VideoMode(1280, 720), "Window"); /*, sf::Style::Titlebar | sf::Style::Close);*/

namespace win{
    void resolution(unsigned int X, unsigned int Y){
        window.setSize(sf::Vector2u(X, Y));
    }
}

namespace camera{
	sf::View view;
	void setSize(float x, float y){
		view.setSize(x, y);
	}
}
