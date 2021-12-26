// MUST INCLUDE
#include "src/include.h"
#include "src/text.h"

int main()
{
    // changing resolution
    win::resolution(1280, 720);
    window.setFramerateLimit(60);

    // font
    sf::Font font;
	if(!font.loadFromFile("src/font/FFFFORWA.TTF")){ printf("ERROR: FAILED TO LOAD FONT");}
        text.setFont(font);
        info.setFont(font);
            text.setCharacterSize(18);
            info.setCharacterSize(18);

	d_text::description("The door won't budge");
	d_text::dialogue("This is a test");

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
        while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


    window.clear();
    window.draw(shape);

    // drawing text
	window.draw(info);
	window.draw(text);
	window.display();
    }

    return 0;
}
