#include <iostream>

#include "Game.h"
#include "Tower.h"
#include "Disk.h"

static const int nbTowers = 3;

Game::Game(int p_iNbDisk)
{
	m_iNbDisks = p_iNbDisk;
	myTowers = new Tower * [nbTowers];
	for (size_t i = 0; i < nbTowers; i++)
	{
		myTowers[i] = new Tower(p_iNbDisk, std::to_string(i));
	}

	for (size_t i = 0; i < p_iNbDisk; i++)
	{
		myTowers[0]->pushDisk(*(new Disk(p_iNbDisk - i)));
	}
	std::cout << "Game is set up, let's rock and roll\n\n" << std::endl;
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
	moveDisk(*(myTowers[0]),
		*(myTowers[1]),
		*(myTowers[2]), 
		m_iNbDisks);
}

void Game::moveDisk(Tower& startTower, 
	Tower& tmpTower, 
	Tower& endTower, 
	int p_iNbDiskToMove)
{
	if (p_iNbDiskToMove == 1) {
		//TODO add verification of authorisation to move 
		//the disk from one tower to the other (rule of 
		//placing smaller disk on bigger ones)
		endTower.pushDisk(startTower.popDisk());
	}
	else if (p_iNbDiskToMove == 2) {
		tmpTower.pushDisk(startTower.popDisk());
		endTower.pushDisk(startTower.popDisk());
		endTower.pushDisk(tmpTower.popDisk());
	}
	else {
 		moveDisk(startTower, endTower, tmpTower, p_iNbDiskToMove - 1);
		endTower.pushDisk(startTower.popDisk());
		moveDisk(tmpTower, startTower, endTower, p_iNbDiskToMove - 1);
	}

}
