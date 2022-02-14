#pragma once
#include <string>
class Disk;
class Tower
{
private:
	Disk** myDisks;
	std::string m_sName;
	int m_iNbDisks;

public:
	Tower(int p_inbMaxdisk, std::string p_sName);
	void pushDisk(Disk& d);
	Disk& popDisk();

	friend std::ostream& operator<<(std::ostream& out, const Tower& t);

};

