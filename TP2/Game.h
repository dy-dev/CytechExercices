#pragma once
class Tower;
class Game
{
private:
	Tower** myTowers;
	int m_iNbDisks;
public:
	Game(int p_iNbDisk);
	~Game();
	void solve();

	void moveDisk(Tower& startTower, 
		Tower& tmpTower, Tower& endTower, int p_iNbDiskToMove );

};

