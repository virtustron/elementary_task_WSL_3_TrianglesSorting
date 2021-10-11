#pragma once
#include <string>
#include <cstring>
#include <math.h>

class Triangle
{
public:
	Triangle();
	Triangle(std::string name, float side_length_1, float side_length_2, float side_length_3);
	~Triangle();
	double get_area(); // for sorting purpuses
	std::string get_as_string();
	void set_priangle_parameters(std::string name, float side_length_1, float side_length_2, float side_length_3);

	bool operator > (Triangle& triangle) const;
	bool operator < (Triangle& triangle) const;

private:
	std::string m_name;
	float m_side_length_1;
	float m_side_length_2;
	float m_side_length_3;
	double m_area;

	void CalcArea();
};

