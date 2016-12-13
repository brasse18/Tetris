#include <iostream> // inport input stream
#include <SFML/Graphics.hpp>
#include <string.h>
#include "include/Game.h"
#include "include/Menu.h"
<<<<<<< HEAD

=======
#include <time.h>       /* time */
#include <stdlib.h>


>>>>>>> development
using namespace sf;
using namespace std;

int main() {
    bool isFullscreen = false;
<<<<<<< HEAD
    bool gameStart = false;
=======
    bool quitGame = false;
    srand (time(NULL));
>>>>>>> development
    RenderWindow window(VideoMode(640,480,32),"Tetris");

    Game game;
    Menu menu;

    Font font;
    font.loadFromFile("font/OpenSans-Bold.ttf");

    Text titleText("Tetris",font,11);
    titleText.setCharacterSize(35);
    titleText.setPosition(200,10);

<<<<<<< HEAD
=======
    menu.setMenuMod(0);

>>>>>>> development
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
<<<<<<< HEAD
                        if (event.key.code == sf::Keyboard::Escape)
                        {
                            std::cout << "the escape key was pressed" << std::endl;
                            std::cout << "control:" << event.key.control << std::endl;
                            std::cout << "alt:" << event.key.alt << std::endl;
                            std::cout << "shift:" << event.key.shift << std::endl;
                            std::cout << "system:" << event.key.system << std::endl;
                        }
=======
>>>>>>> development
                    }
                    break;

                case sf::Event::MouseButtonPressed:
<<<<<<< HEAD
                    if (event.type == sf::Event::MouseButtonPressed)
=======
>>>>>>> development
                    {
                        menu.MouseButtonPressed(event,window);
                    }
                    break;
                    // we don't process other types of events
                default:
                    break;
            }
        }

<<<<<<< HEAD
=======
        if (menu.getGameQuit())
        {
            game.quitGame();
        }

>>>>>>> development
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
<<<<<<< HEAD


=======
>>>>>>> development
    }
	return 0;
 }
