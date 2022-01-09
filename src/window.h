#pragma once
#include "include.h"
bool b_fullscreen;
// TODO: create `settings.ini` for size and states (e.g. fullscreen)

// TODO: get Desktop size and / by 16:9

unsigned int w_height;
unsigned int w_width;

sf::RenderWindow window(sf::VideoMode(1280, 720), "Window"); /*, sf::Style::Titlebar | sf::Style::Close);*/

namespace win{
    void Resolution(unsigned int X, unsigned int Y, std::string Title){
        window.setSize(sf::Vector2u(X, Y));
		window.setTitle(Title);
    }
}

namespace camera{
	sf::View view;
	void SetSize(float x, float y){
		view.setSize(x, y);
	}
}
