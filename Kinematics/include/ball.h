#ifndef BALL_H
#define BALL_H
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
class Ball {
public:
  Ball() {
    ballShape.setPosition(Position);
    ballShape.setFillColor(sf::Color::Red);
    ballShape.setOrigin({Radius, Radius});
    ballShape.setRadius(Radius);
  };

  void Input(const float &deltatime);
  void Update(const float &deltatime);
  void Render(sf::RenderWindow &window);

private:
  sf::CircleShape ballShape;
  float Radius{30};
  float time{};

  sf::Vector2f Position{0 + Radius, 1080 - Radius};
  sf::Vector2f Velocity = {500.f, 500.f};
  float Acceleration{400.f};
};
#endif
