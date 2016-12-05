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
    if (!gameStart)
    {
        target.draw(menuStartText);
        target.draw(menuFullscreenText);
    }
    target.draw(menuExitText);
}

void Menu::update(Event &event,RenderWindow &window)
{

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

bool Menu::isClickt(Text text,int x,int y)
{
    bool anser = false;
    if (x > text.getPosition().x &&
        x < text.getPosition().x + text.getLocalBounds().width) {
        if (y > text.getPosition().y &&
            y < text.getPosition().y + text.getLocalBounds().height) {
            anser = true;
        }
    }

    return anser;
}

void Menu::MouseButtonPressed(Event &event, RenderWindow &window)
{
    int x = event.mouseButton.x;
    int y = event.mouseButton.y;
    if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (isClickt(menuExitText, x, y)) {
                cout << "Exit" << endl;
                window.close();
            }
            if (!gameStart) {
                if (isClickt(menuStartText, x, y)) {
                    cout << "Start" << endl;
                    menuExitText.setPosition(Vector2f(400, 5));
                    gameStart = true;
                }

                if (isClickt(menuFullscreenText, x, y)) {
                    cout << "Fullscreen" << endl;
                    if (true == isFullscreen) {
                        window.create(sf::VideoMode(640, 480), "Tetris", sf::Style::Default);
                        menuFullscreenText.setString("Fullscreen mod");
                        this->isFullscreen = false;
                    } else {
                        cout << "Fullscreen mod" << endl;
                        window.create(sf::VideoMode(VideoMode::getDesktopMode().width,
                                                    VideoMode::getDesktopMode().height), "Tetris",
                                      sf::Style::Fullscreen);
                        menuFullscreenText.setString("Window mod");
                        this->isFullscreen = true;
                    }
                }
            }
        }
        if (event.mouseButton.button == sf::Mouse::Right) {

        }
    }
}
