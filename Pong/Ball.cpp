#include "Ball.h"

//Constructor function
Ball::Ball (float startX, float startY) {
	
	m_Position.x = startX;
	m_Position.y = startY;

	m_Shape.setSize(sf::Vector2f(10, 10));
	m_Shape.setPosition(m_Position);
}

//Getter function - getPosition uses getGlobalBoundds on m_Shape to return a FloatRect instance (used for collision detection)
FloatRect Ball::getPosition() {
	return m_Shape.getGlobalBounds();
}

//Getter function - getShape returns m_Shape so that it can be drawn each frame of the game loop
RectangleShape Ball::getShape() {
	return m_Shape;
}

//Getter function - getXVelocity tells the main function which direction the ball is traveling in
float Ball::getXVelocity() {
	return m_DirectionX;
}