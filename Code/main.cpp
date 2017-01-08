#include <iostream> // inport input stream
#include <SFML/Graphics.hpp>
#include <string.h>
#include "include/Game.h"
#include "include/Menu.h"
#include <time.h>       /* time */
#include <stdlib.h>

using namespace sf;
using namespace std;


int main(int argc, char** argv) {
    bool isFullscreen = false;
    bool quitGame = false;
    srand(time(NULL));
    RenderWindow window(VideoMode(840,480,32),"Tetris");

    Game game;
    Menu menu;

    Font font;
    font.loadFromFile("font/OpenSans-Bold.ttf");

    Text titleText("Tetris",font,11);
    titleText.setCharacterSize(35);
    titleText.setPosition(350,10);

    menu.setMenuMod(0);
    if (argc >= 2)
    {
        game.playfild.setName(argv[1]);
    } else
    {
        game.playfild.setName("Ananumes");
    }


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
                    if (event.type == sf::Event::KeyPressed)
                    {
                        game.KeyPressed(event);
                    }
                    break;

                case sf::Event::MouseButtonPressed:
                    {
                        menu.MouseButtonPressed(event,window);
                    }
                    break;
                    // we don't process other types of events
                default:
                    break;
            }
        }

        if (menu.getGameQuit())
        {
            game.quitGame();
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
