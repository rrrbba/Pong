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

//m_DirectionX value is inverted when the ball hits the sides (reversing the direction of the ball)
void Ball::reboundSides() {
	m_DirectionX = -m_DirectionX;
}

//m_DirectionY value is inverted when the ball hits the top or bottom (reversing the direction of the ball)
void Ball::reboundBatOrTop() {
	m_DirectionY = -m_DirectionY;
}

//reboundBottom repositions the ball at the top center of the screen and sends it downward. What we want to happen after the player missed a ball and it has hit the bottom of the screen
void Ball::reboundBottom() {
	m_Position.y = 0;
	m_Position.x = 500;
	m_DirectionY = -m_DirectionY;
}

