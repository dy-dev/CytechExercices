#include "Pair.h"

Pair::Pair()
	:Pair(0, 0)
{
}

Pair::Pair(int a, int b)
	: pa{ new int(a) }
	, pb{ new int(b) }
	, mul{ *pa * *pb }
	, div{ *pb == 0 ? 0 : *pa / *pb }
	, add{ *pa + *pb }
	, sub{ *pa - *pb }
{
}

Pair::Pair(const Pair& other)
	:Pair(*(other.pa), *(other.pb))
	/*pa{new int(*(other.pa))}
	, pb{ new int(*(other.pb)) }*/
{
}

Pair::~Pair()
{
}

std::ostream& operator<<(std::ostream& out, const Pair& p)
{
	out << "Les elements de ma pair sont : "
		<< std::endl << "\t -" << *(p.pa)
		<< std::endl << "\t -" << *(p.pb) <<std::endl;
	return out;
}
