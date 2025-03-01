#include "ball.h"
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>

int main() {
  auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Kinematics");
  window.setFramerateLimit(144);

  Ball ball;

  sf::Clock clock;
  float deltatime;

  while (window.isOpen()) {

    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }

    deltatime = clock.restart().asSeconds();

    window.clear();

    ball.Update(deltatime);
    ball.Render(window);

    window.display();
  }
}
