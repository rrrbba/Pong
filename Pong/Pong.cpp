#include "Bat.h"
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>


int main()
{
    //Create a video mode object
    VideoMode vm(1920, 1080);

    //Create and open a window for the game
    RenderWindow window(vm, "Pong", Style::Fullscreen);

    int score = 0;
    int lives = 3;

    //Call constructor funct to c reate a bat at the bottom center of the screeen
    Bat bat(1920 / 2, 1080 - 20);

    //Add a ball

    //Create a Text object called HUD
    Text hud;

    //Font
    Font font;
    font.loadFromFile("fonts/DS-DIGI.ttf");

    //Set font 
    hud.setFont(font);

    //Set font size
    hud.setCharacterSize(75);

    //Set color
    hud.setFillColor(Color::White);

    hud.setPosition(20, 20);

    //Clock for timing everything
    Clock clock;

    while (window.isOpen()) {

        /*****Handle player input*******/
        Event event;

        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                //Quit the game when the window is closed
                window.close();
        }
        
        //Handle the player quitting
        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        }

        //Handle the pressing and releasing of left arrow key
        if (Keyboard::isKeyPressed(Keyboard::Left)) {
            bat.moveLeft();
        }
        else {
            bat.stopLeft();
        }

        //Handle the pressing and releasing of right arrow key
        if (Keyboard::isKeyPressed(Keyboard::Right)) {
            bat.moveRight();
        }
        else {
            bat.stopRight();
        }


        /*******Update the bat, the ball and the HUD*******/




        /********Draw the bat, the ball and the HUD*******/



    }

    return 0;
}

//172
