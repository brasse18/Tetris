#include <iostream>
#include "include/Game.h"

using namespace sf;
using namespace std;

Game::Game() 
{

}

void Game::Update(Event &event,RenderWindow &window)
{

}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const 
{
    target.draw(playfild);
}

void Game::gameRound()
{
    playfild.move();
}

void Game::KeyPressed(Event event)
{
    if (event.key.code == sf::Keyboard::Escape)
    {
        std::cout << "the escape key was pressed" << std::endl;
        std::cout << "control:" << event.key.control << std::endl;
        std::cout << "alt:" << event.key.alt << std::endl;
        std::cout << "shift:" << event.key.shift << std::endl;
        std::cout << "system:" << event.key.system << std::endl;
    }
    if (event.key.code == sf::Keyboard::D)
    {
        std::cout << "the D key was pressed" << std::endl;
        playfild.move(1);
    }
    if (event.key.code == sf::Keyboard::A)
    {
        std::cout << "the A key was pressed" << std::endl;
        playfild.move(-1);
    }
}
