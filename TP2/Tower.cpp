#include <iostream>

#include "Disk.h"
#include "Tower.h"

Tower::Tower(int p_inbMaxdisk, std::string p_sName)
{
	myDisks = new Disk * [p_inbMaxdisk];
	m_iNbDisks = 0;
	m_sName = p_sName;
}

void Tower::pushDisk(Disk& d)
{
	std::cout << d << *this;
	myDisks[m_iNbDisks] = &d;
	m_iNbDisks++;
}

Disk& Tower::popDisk()
{
	Disk& tmp = *(myDisks[m_iNbDisks-1]);
	myDisks[m_iNbDisks-1] = nullptr;
	m_iNbDisks--;
	std::cout << "Disk of diameter " << tmp.getDiameter() << " is removed from the Tower" << m_sName << std::endl;
	return tmp;
}

std::ostream& operator<<(std::ostream& out, const Tower& t)
{
	out << " is added to the Tower " << t.m_sName << "  " << std::endl;
	return out;
}
