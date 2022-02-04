#pragma once
class Vector
{
private:
	int m_iSize;
	double* m_dDatasArray;
	int test;

public : 
	Vector(int p_iSize);
	Vector(const Vector& p_Vector);
	Vector& operator = (const Vector & v);
	~Vector();

	void setElement(int p_iIndex, double p_dValue);
};

