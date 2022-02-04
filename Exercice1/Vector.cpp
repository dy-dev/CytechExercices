#include "Vector.h"
#include <cstring>

Vector::Vector(int p_iSize)
	: m_iSize{p_iSize}
	, m_dDatasArray{new double[m_iSize]}
{
}

Vector::Vector(const Vector& p_Vector)
	: m_iSize{ p_Vector.m_iSize }
	, m_dDatasArray{ new double[m_iSize] }
{
	int *test = (int*)((&m_dDatasArray[10]));

	//Ici on a une belle démonstration de jardinage mémoire
	//On récupère 2 fois plus de donnée que ce que le tableau est supposé contenir 
	//ce qui écrase la variable test qui pointe sur le contenu mémoire à la suite 
	//du tableau
	memcpy(m_dDatasArray, p_Vector.m_dDatasArray, 2*m_iSize * sizeof(double));
}

Vector& Vector::operator=(const Vector& v)
{
	memcpy(m_dDatasArray, v.m_dDatasArray, m_iSize * sizeof(double));

	return *this;
	// TODO: insérer une instruction return ici
}

Vector::~Vector()
{
	delete[] m_dDatasArray;
}

void Vector::setElement(int p_iIndex, double p_dValue)
{
	m_dDatasArray[p_iIndex] = p_dValue;
}
