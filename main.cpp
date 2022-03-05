// MUST INCLUDE
#include "src/include.h"
#include "src/text.h"

int main()
{
  // changing resolution
  win::Resolution(1280, 720, "Window");
  window.setFramerateLimit(60);

  // text
  loadFont();
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
      
      // render
      window.draw(info);
      window.draw(text);
      window.display();
    }
  
  return 0;
}
