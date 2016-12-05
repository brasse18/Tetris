#include <iostream> // inport input stream
#include <SFML/Graphics.hpp>
#include <string.h>
#include "include/Game.h"
#include "include/Menu.h"

using namespace sf;
using namespace std;

int main() {
    bool isFullscreen = false;
    bool gameStart = false;
    RenderWindow window(VideoMode(640,480,32),"Tetris");

    Game game;
    Menu menu;

    Font font;
    font.loadFromFile("font/OpenSans-Bold.ttf");

    Text titleText("Tetris",font,11);
    titleText.setCharacterSize(35);
    titleText.setPosition(200,10);

    while(window.isOpen()){

        Event event;
        while(window.pollEvent(event)) {

            switch (event.type) {
                // window closed
                case sf::Event::Closed:
                    window.close();
                    break;

                    // key pressed
                case sf::Event::KeyPressed:

                    break;

                case sf::Event::MouseButtonPressed:
                    if (event.type == sf::Event::MouseButtonPressed) {
                        if (event.mouseButton.button == sf::Mouse::Left) {
                            menu.update(window,event.mouseButton.x,event.mouseButton.y);
                            std::cout << "the Left button was pressed" << std::endl;
                            std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                            std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                        }
                        if (event.mouseButton.button == sf::Mouse::Right) {
                            std::cout << "the right button was pressed" << std::endl;
                            std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                            std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                        }
                    }
                    break;
                    // we don't process other types of events
                default:
                    break;
            }
        }

        if (menu.getStart())
        {
            game.gameRound();
            window.clear(Color::Black);
            window.draw(titleText);
            window.draw(menu);
            window.draw(game);
            window.display();
        } else
        {
            window.clear(Color::Black);
            window.draw(titleText);
            window.draw(menu);
            window.display();
        }


    }
	return 0;
 }
