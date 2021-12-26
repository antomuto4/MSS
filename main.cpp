// MUST INCLUDE
#include "src/include.h"
#include "src/text.h"

int main()
{
    // changing resolution
    win::Create(256, 224, "Mode 7");
    window.setFramerateLimit(60);

    float fX = 60.f;
    float fY = 100.f;

    // font
    sf::Font font;
	if(!font.loadFromFile("src/font/FFFFORWA.TTF")){ printf("ERROR: FAILED TO LOAD FONT");}
        text.setFont(font);
        info.setFont(font);
            text.setCharacterSize(18);
            info.setCharacterSize(18);

	d_text::Description("The door won't budge");
	d_text::Dialogue("This is a test");

    // message on startup
    std::cout << "\tINSTRUCTIONS\n";
	std::cout << "------------------------------------\n";
	std::cout << "Left & Right Arrow:\tMove Camera\n";
	std::cout << "WASD:\tMove Sprite\n";
	std::cout << "HJKL:\tIncrease & Decrease fX/fY (stretch)\n";

    // map
    sf::Sprite map;
    sf::Texture texture_map;
    if(!texture_map.loadFromFile("src/sprites/SuperMarioKartMapMushroomCup1.png"));
    map.setTexture(texture_map);

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // camera
        sf::View view(sf::FloatRect(0, 0, fX, fY));
        view.rotate(70.f);

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            map.rotate(0.5f);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            map.rotate(-0.5f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
           map.move(0, -5); 
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
           map.move(0, 5); 
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
           map.move(-5, 0); 
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
           map.move(5, 0); 
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::L)){
            fX = fX + 10;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::H)){
            fX = fX - 10;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::K)){
            fY = fY - 10;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::J)){
            fY = fY + 10;
        }

        window.clear();

        // drawing text
        window.setView(view);
        window.draw(map);
	    //window.draw(info);
        //window.draw(text);
	    window.display();
    }
    return 0;
}
