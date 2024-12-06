#include <SFML/Graphics.hpp>
#include <iostream>


int main(){
   sf::RenderWindow window(sf::VideoMode(1200,900),"Shooting Project",
   sf::Style::Close | sf::Style::Titlebar);
  sf::Clock clock;
   while (window.isOpen())
   {
    float deltaTime = clock.restart().asSeconds();
    sf::Event e{};
    while (window.pollEvent(e))
    {
        if (e.type = sf::Event::Closed)
        {
            window.close();
        }

    }

        window.clear();
        //draw...
        window.display();
    
   }
   
}