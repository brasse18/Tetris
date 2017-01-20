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
    menuFullscreenText.setPosition(200,200);

    menuQuitGameText.setFont(font);
    menuQuitGameText.setCharacterSize(11);
    menuQuitGameText.setString("Quit Game");
    menuQuitGameText.setCharacterSize(25);
    menuQuitGameText.setPosition(400,50);

    menuExitText.setFont(font);
    menuExitText.setCharacterSize(11);
    menuExitText.setString("Exit");
    menuExitText.setCharacterSize(25);
    menuExitText.setPosition(200,250);

}

void Menu::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    switch (menuMod)
    {
        case 0:
            target.draw(menuStartText);
            target.draw(menuFullscreenText);
            target.draw(menuExitText);
            break;
        case 1:
            target.draw(menuExitText);
            target.draw(menuQuitGameText);
            break;
        case 2:
            target.draw(menuExitText);
            break;

        default:
            break;
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

bool Menu::isClickt(Text text,Vector2i mous)
{
    bool anser = false;
    if (text.getGlobalBounds().contains(mous.x,mous.y)) {
            anser = true;
    }
    return anser;
}

void Menu::MouseButtonPressed(Event &event, RenderWindow &window)
{
    mous = Vector2i(event.mouseButton.x,event.mouseButton.y);
        if (event.mouseButton.button == sf::Mouse::Left)
        {
        switch (menuMod) {
            case 0:
            {
                if (isClickt(menuStartText,mous))
                {
                    cout << "Start" << endl;
                    menuExitText.setPosition(Vector2f(400, 5));
                    gameStart = true;
                    setMenuMod(1);
                }
                if (isClickt(menuFullscreenText,mous)) {
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
                    if (isClickt(menuExitText,mous)) {
                        cout << "Exit" << endl;
                        window.close();
                    }
                }
                    break;
            case 1:
                if (isClickt(menuExitText,mous)) {
                    cout << "Exit" << endl;
                    window.close();
                }
                if (isClickt(menuQuitGameText,mous)) {
                    cout << "Quit Game" << endl;
                    gameStart = false;
                    quitGame = true;
                    setMenuMod(0);
                }
            break;
            case 2:
                if (isClickt(menuExitText,mous)) {
                    cout << "Exit" << endl;
                    window.close();
                }
            break;

            default:
                break;
                }
            }
}

bool Menu::getGameQuit()
{
    bool anser = false;
    if (quitGame)
    {
        anser = quitGame;
        quitGame = false;
    }
    return anser;
}

void Menu::setMenuMod(int nr)
{
    switch (nr)
    {
        case 0:
            menuStartText.setPosition(200,150);
            menuFullscreenText.setPosition(200,200);
            menuExitText.setPosition(200,250);
            menuMod = 0;
            break;
        case 1:
            menuQuitGameText.setPosition(400,405);
            menuExitText.setPosition(400,450);
            menuMod = 1;
            break;
        case 2:
            menuExitText.setPosition(400,5);
            menuMod = 2;
            break;

        default:
            break;
    }
}

bool Menu::getExit()
{
    return exit;
}
