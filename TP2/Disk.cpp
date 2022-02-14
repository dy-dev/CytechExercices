#include <iostream>
#include "Disk.h"

Disk::Disk(int p_iDiameter)
{
	m_iDiameter = p_iDiameter;
}


std::ostream& operator<<(std::ostream& out, const Disk& d)
{
	out << "Disk of diameter " << d.m_iDiameter << "  ";
	return out;
}
