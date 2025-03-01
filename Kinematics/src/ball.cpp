#include "ball.h"
#include <SFML/System/Angle.hpp>
#include <SFML/System/Vector2.hpp>
#include <cmath>

void Ball::Update(const float &deltatime) {
  time += deltatime;

  float degree = 45.f;
  float degreeRad = degree * (sf::priv::pi / 180.f);

  sf::Vector2f VelocityInDegreee = {cos(degreeRad) * Velocity.x,
                                    -sin(degreeRad) * Velocity.y};

  sf::Vector2f newPostion{};

  newPostion.x = Position.x + VelocityInDegreee.x * time;
  newPostion.y = Position.y + VelocityInDegreee.y * time +
                 0.5f * Acceleration * time * time;

  ballShape.setPosition(newPostion);
};
void Ball::Render(sf::RenderWindow &window) { window.draw(ballShape); };
