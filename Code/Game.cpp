#include "Game.h"
#include "include/Box.h"



void Game::gameRound() {

}

virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target(box);
}

void Game::update() {

}

void Game::endGame() {

}

Game::Game() {
    mWindow(VideoMode(640,480,32),"Tetris");
}
