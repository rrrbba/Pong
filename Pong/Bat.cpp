#include "Bat.h"


//The constructor and is called when we create an object
Bat::Bat(float startX, float startY) {  //Bat::Bat makes it clear that Bat function from the Bat class is being used
	m_Position.x = startX;
	m_Position.y = startY;

	m_Shape.setSize(sf::Vector2f(50, 5));
	m_Shape.setPosition(m_Position);
}