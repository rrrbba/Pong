#pragma once   //prevents the file from being processed by the compiler more than once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bat {

private:
	Vector2f m_Position; //hold the horiz. and vert. position of the player's bat

	//A rectangle shape object - actual bat that appears on the screen
	RectangleShape m_Shape;

	float m_Speed = 1000.0f;
	bool m_MovingRight = false;
	bool m_MovingLeft = false;

public:
	//constructor (they have no return type, not even void)
	Bat (float startX, float startY);

	FloatRect getPosition();
	
	RectangleShape getShape();

	void moveLeft();

	void moveRight();

	void stopLeft();

	void stopRight();

	void update(Time dt); //will be used to calc. how to move the bat each frame

};