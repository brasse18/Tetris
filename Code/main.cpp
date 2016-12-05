#include <iostream> // inport input stream
#include <SFML/Graphics.hpp>
#include <string.h>
#include "include/Game.h"

using namespace sf;
using namespace std;

int main() {
    bool isFullscreen = false;
    bool gameStart = false;
    RenderWindow window(VideoMode(640,480,32),"Tetris");

    Game testGame;

    Font font;
    font.loadFromFile("font/OpenSans-Bold.ttf");

    Text titleText("Tetris",font,11);
    titleText.setCharacterSize(35);
    titleText.setPosition(200,10);

    Text menuStartText("Start",font,11);
    menuStartText.setCharacterSize(25);
    menuStartText.setPosition(200,150);

    Text menuFullscreenText("Fullscreen mod",font,11);
    menuFullscreenText.setCharacterSize(25);
    menuFullscreenText.setPosition(200,180);

    Text menuExitText("Exit",font,11);
    menuExitText.setCharacterSize(25);
    menuExitText.setPosition(200,200);


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

                case sf::Event::MouseButtonReleased:
                    if (event.type == sf::Event::MouseButtonPressed) {
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

            //if (event.type == Event::Closed) {
            //    window.close();
            //}
            if (Mouse::isButtonPressed(Mouse::Left)) {
                Vector2i position = Mouse::getPosition(window);
                if (position.x > menuStartText.getPosition().x &&
                    position.x < menuStartText.getPosition().x + menuStartText.getLocalBounds().width) {
                    if (position.y > menuStartText.getPosition().y &&
                        position.y < menuStartText.getPosition().y + menuStartText.getLocalBounds().height) {
                        cout << "Start" << endl;
                        gameStart = true;
                    }
                }

                if (position.x > menuFullscreenText.getPosition().x &&
                    position.x < menuFullscreenText.getPosition().x + menuFullscreenText.getLocalBounds().width) {
                    if (position.y > menuFullscreenText.getPosition().y &&
                        position.y < menuFullscreenText.getPosition().y + menuFullscreenText.getLocalBounds().height) {
                        cout << "Fullscreen" << endl;
                        if (true == isFullscreen) {
                            cout << "Window mod" << endl;
                            menuFullscreenText.setString("Fullscreen mod");
                            window.create(sf::VideoMode(640, 480), "Tetris", sf::Style::Default);
                            isFullscreen = false;
                        } else {
                            cout << "Fullscreen mod" << endl;
                            menuFullscreenText.setString("Window mod");
                            window.create(sf::VideoMode(VideoMode::getDesktopMode().width,
                                                        VideoMode::getDesktopMode().height), "Tetris",
                                          sf::Style::Fullscreen);
                            isFullscreen = true;
                        }

                    }

                    if (position.x > menuExitText.getPosition().x &&
                        position.x < menuExitText.getPosition().x + menuExitText.getLocalBounds().width) {
                        if (position.y > menuExitText.getPosition().y &&
                            position.y < menuExitText.getPosition().y + menuExitText.getLocalBounds().height) {
                            cout << "Exit" << endl;
                            window.close();
                        }
                    }
                }
            }
        }
        if (gameStart)
        {
            testGame.gameRound();

            window.clear(Color::Black);
            window.draw(titleText);
            window.draw(menuExitText);
            window.draw(testGame);
            window.display();
        } else
        {
            window.clear(Color::Black);
            window.draw(titleText);
            window.draw(menuStartText);
            window.draw(menuFullscreenText);
            window.draw(menuExitText);
            window.display();
        }


    }
	return 0;
 }
