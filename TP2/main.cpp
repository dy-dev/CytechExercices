#include <iostream>
#include "Pair.h"
#include "Game.h"
Pair& CreatePairs(int a, int b);

int main() {
	Pair* hp = &(CreatePairs(10,15));
	CreatePairs(20, 45);
	std::cout << *hp << std::endl;

	delete hp;
	std::cout << "If this message is printed, at least the program hasn't crashed yet :-)" << std::endl;
	
	Game* myGame = new Game();
	myGame->solve();
	return 0;
}



Pair& CreatePairs(int a, int b)
{
	Pair p(a, b);
	Pair q{ p };
	Pair* hp = new Pair(10*a, 10*b);
	std::cout << p << q << *hp;
	return *hp;
}
