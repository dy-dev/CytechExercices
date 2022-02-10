#include "Game.h"
#include "Tower.h"
static const int nbTowers = 3;

Game::Game()
{
	myTowers = new Tower * [nbTowers];
	for (size_t i = 0; i < nbTowers; i++)
	{
		myTowers[i] = new Tower();
	}
}

Game::~Game()
{
	for (size_t i = 0; i < nbTowers; i++)
	{
		delete myTowers[i];
	}
	delete[] myTowers;
}

void Game::solve()
{
}
