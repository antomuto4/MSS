// MUST INCLUDE
#include "src/include.h"
#include "src/text.h"

int main()
{
  // changing resolution

  // TODOOO: lock the aspect ratio to 16:9
  win::resolution(1280, 720, "Window");
  window.setFramerateLimit(60);
  
  // font

  //TODO: insert in a seperate cpp file 
  sf::Font font;
  if(!font.loadFromFile("src/font/FFFFORWA.TTF")){ printf("ERROR: FAILED TO LOAD FONT");}

  // TODO: rename text and info to something that makes a bit more fucking sense
  text.setFont(font);
  info.setFont(font);
  text.setCharacterSize(18);
  info.setCharacterSize(18);
  
  d_text::Description("The door won't budge");
  d_text::Dialogue("Dialogue text");
  
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

      // camera
      //camera::setSize(1280.f, 720.f); /* Position of Camera */
      //window.setView(camera::view);
      
      // drawing text
      window.draw(info);
      window.draw(text);
      window.display();
    }
  
  return 0;
}
