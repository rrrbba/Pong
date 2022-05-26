#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;


class Ball {

private:
	Vector2f m_Position;
	RectangleShape m_Shape;

	float m_Speed = 300.0f;
	float m_DirectionX = .2f;
	float m_DirectionY = .2f;

public:
	Ball(float startX, float startY);

	FloatRect getPosition();

	RectangleShape getShape();
	
	float getXVelocity();

	//Called in response to the ball hitting the sides of the screen
	void reboundSides();

	//Called in response to the ball hitting the player's bat or top of the screen
	void reboundBatOrTop();

	//Called in response to the ball hitting bottom of the screen
	void reboundBottom();

	void update(Time dt);
};