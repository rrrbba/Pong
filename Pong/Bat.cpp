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

//Pass a copy of m_Shape to the calling code so that we can draw the bat in the main function
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

//Called once/frame
void Bat::update(Time dt) {
	
	//Causes the bat to move relative to how long the frame took to update
	if (m_MovingLeft) {
		//Multiplies the speed by the delta time and subtracts it from the position
		m_Position.x -= m_Speed * dt.asSeconds();
	}

	//Causes the bat to move relative to how long the frame took to update
	if (m_MovingRight) {
		//Multiplies the speed by the delta time and adds it from the position
		m_Position.x += m_Speed * dt.asSeconds();
	}

	//Sets the position of m_Shape with whatever the latest values held in m_Position are
	m_Shape.setPosition(m_Position);
}

//169