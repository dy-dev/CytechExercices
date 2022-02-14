#pragma once
class Disk
{
private:
	int m_iDiameter;

public:
	Disk(int p_iDiameter);

	inline int getDiameter() const { return m_iDiameter; };
	inline void setDiameter(int p_iDiameter) { m_iDiameter = p_iDiameter; };

	friend std::ostream& operator<<(std::ostream& out, const Disk& d);

};

