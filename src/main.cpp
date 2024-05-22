#include <SFML/Graphics.hpp>
#include <iostream> 

int main() {
  #if NDEBUG 
    std::cout << "Debug mode is OFF" << std::endl;
  #else 
    std::cout << "Debug mode is ON" << std::endl;
  #endif 


  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
  sf::CircleShape shape(100.f);
  
  #if !NDEBUG
    sf::Font font;
    sf::Text text;

    if (!font.loadFromFile("media/Sansation.ttf")) {
      return -1;
    }
    text.setString("DEBUG MODE");
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
  #endif

  shape.setFillColor(sf::Color::Green);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();
    window.draw(shape);
    #if !NDEBUG
    window.draw(text);
    #endif
    window.display();
  }

  return 0;
}
