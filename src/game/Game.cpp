#include "game/Game.h"

Game::Game() : m_isRunning(true)
{
}

void Game::Init()
{
	m_window.create(sf::VideoMode(800, 600), "Bobcat Engine");
}

void Game::Run()
{
	while (IsRunning()) {
		sf::Event event;

		while (m_window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				m_isRunning = false;
				continue;
			}
		}

		ProcessInput();
		Update();
		Render();
	}
}

void Game::ProcessInput()
{
}

void Game::Update()
{
}

void Game::Render()
{
	m_window.clear();
	m_window.display();
}

bool Game::IsRunning() 
{
    return m_isRunning;
}