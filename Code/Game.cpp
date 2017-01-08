#include <iostream>
#include "include/Game.h"
#include <SFML/Audio.hpp>

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
    if (!isMusicPlayeng())
    {
        startMusic();
    }
    float gameTime = clock.getElapsedTime().asSeconds();
    if (gameTime >= 1)
    {
        playfild.playRound();
        clock.restart();
    }


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
        playfild.moveToSide(moveRight);
    }
    if (event.key.code == sf::Keyboard::A)
    {
        std::cout << "the A key was pressed" << std::endl;
        playfild.moveToSide(moveLeft);
    }
    if (event.key.code == sf::Keyboard::R)
    {
        std::cout << "the R key was pressed" << std::endl;
        playfild.rotateBlocks();
    }
    if (event.key.code == sf::Keyboard::Space)
    {
        std::cout << "the Space key was pressed" << std::endl;
        playfild.spanBlocks();
    }
    if (event.key.code == sf::Keyboard::Delete)
    {
        std::cout << "the Delete key was pressed" << std::endl;
        playfild.delLine(8);
    }
    if (event.key.code == sf::Keyboard::P)
    {
        std::cout << "the P key was pressed" << std::endl;
        startMusic();
    }
}


void Game::startMusic()
{
    if (!music.openFromFile("sound/tetris.ogg"))
    {
        cout << "Error loading music" << endl;
    } else {
        music.play();
        music.setLoop(true);
    }

}

void Game::stopMusic()
{
    music.stop();
}

bool Game::isMusicPlayeng()
{
    bool anser = false;
    if (music.getStatus() == Music::Playing)
    {
        anser = true;
    }
    return anser;
}

void Game::quitGame()
{
    stopMusic();
    playfild.quitGame();
    playfild = Playfild();
}
