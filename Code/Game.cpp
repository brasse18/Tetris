#include "include/Game.h"

Game::Game() 
{

}

void Game::Update(float dt) 
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
