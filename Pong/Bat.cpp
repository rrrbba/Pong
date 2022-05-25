#include "Bat.h"


//The constructor and is called when we create an object
Bat::Bat(float startX, float startY) {  //Bat::Bat makes it clear that Bat function from the Bat class is being used
	m_Position.x = startX;
	m_Position.y = startY;

	m_Shape.setSize(sf::Vector2f(50, 5)); //RectangleShape is called m_Shape
	m_Shape.setPosition(m_Position);

}

//This function is called when determining whether the ball has hit the bat
FloatRect Bat::getPosition() {
	//Returns a FloatRect that is initialized with the coord. of the 4 corners of the RectangleShape(m_Shape)
	return m_Shape.getGlobalBounds();
}

RectangleShape Bat::getShape() {
	return m_Shape;
}

void Bat::moveLeft() {
	m_MovingLeft = true;
}

void Bat::moveRight() {
	m_MovingRight = true;
}

void Bat::stopLeft() {
	m_MovingLeft = false;
}

void Bat::stopRight() {
	m_MovingRight = false;
}

void Bat::update(Time dt) {
	
	if (m_MovingLeft) {
		m_Position.x -= m_Speed * dt.asSeconds();
	}

	if (m_MovingRight) {
		m_Position.x += m_Speed * dt.asSeconds();
	}

	m_Shape.setPosition(m_Position);
}

//169