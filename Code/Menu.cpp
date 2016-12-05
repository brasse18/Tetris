#include "include/Menu.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "string"

using namespace std;
using namespace sf;

Menu::Menu()
{
    font.loadFromFile("font/OpenSans-Bold.ttf");

    menuStartText.setFont(font);
    menuStartText.setCharacterSize(11);
    menuStartText.setString("Start");
    menuStartText.setCharacterSize(25);
    menuStartText.setPosition(200,150);

    menuFullscreenText.setFont(font);
    menuFullscreenText.setCharacterSize(11);
    menuFullscreenText.setString("Fullscreen mod");
    menuFullscreenText.setCharacterSize(25);
    menuFullscreenText.setPosition(200,180);

    menuExitText.setFont(font);
    menuExitText.setCharacterSize(11);
    menuExitText.setString("Exit");
    menuExitText.setCharacterSize(25);
    menuExitText.setPosition(200,200);

}

void Menu::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(menuStartText);
    target.draw(menuFullscreenText);
    target.draw(menuExitText);
}

void Menu::update(RenderWindow &window,int x,int y)
{
    if (Mouse::isButtonPressed(Mouse::Left)) {
        if (x > menuStartText.getPosition().x &&
            x < menuStartText.getPosition().x + menuStartText.getLocalBounds().width) {
            if (y > menuStartText.getPosition().y &&
                y < menuStartText.getPosition().y + menuStartText.getLocalBounds().height) {
                cout << "Start" << endl;
                gameStart = true;
            }
        }

        if (x > menuFullscreenText.getPosition().x &&
            x < menuFullscreenText.getPosition().x + menuFullscreenText.getLocalBounds().width) {
            if (y > menuFullscreenText.getPosition().y &&
                y < menuFullscreenText.getPosition().y + menuFullscreenText.getLocalBounds().height) {
                cout << "Fullscreen" << endl;
                if (true == isFullscreen) {
                    window.create(sf::VideoMode(640, 480), "Tetris", sf::Style::Default);
                    menuFullscreenText.setString("Fullscreen mod");
                    isFullscreen = false;
                } else {
                    cout << "Fullscreen mod" << endl;
                    window.create(sf::VideoMode(VideoMode::getDesktopMode().width,
                                                VideoMode::getDesktopMode().height), "Tetris",
                                  sf::Style::Fullscreen);
                    menuFullscreenText.setString("Window mod");
                    isFullscreen = true;
                }

            }

            if (position.x > menuExitText.getPosition().x &&
                position.x < menuExitText.getPosition().x + menuExitText.getLocalBounds().width) {
                if (position.y > menuExitText.getPosition().y &&
                    position.y < menuExitText.getPosition().y + menuExitText.getLocalBounds().height) {
                    cout << "Exit" << endl;
                }
            }
        }
    }
}

bool Menu::getStart()
{
    return gameStart;
}

bool Menu::getFulscreen()
{
    return isFullscreen;
}

void Menu::switchFulscreen()
{
    if (isFullscreen)
    {
        isFullscreen = false;
    }
}
