#pragma once
class Tower;
class Game
{
private:
	Tower** myTowers;
public:
	Game();
	~Game();
	void solve();
};

