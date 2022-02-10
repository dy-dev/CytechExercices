#pragma once
#include <string>
class Disk;
class Tower
{
private:
	Disk** myDisks;
	std::string name;

public:
	Tower();
	void pushDisk(Disk d);
};

