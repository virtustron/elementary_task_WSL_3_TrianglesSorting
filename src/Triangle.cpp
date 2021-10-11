#include "Triangle.h"

Triangle::Triangle()
{
	m_name = new char[50];
	m_side_length_1 = 0;
	m_side_length_2 = 0;
	m_side_length_3 = 0;
	m_area = 0;
}

Triangle::Triangle(std::string name, float side_length_1, float side_length_2, float side_length_3)
{
	set_priangle_parameters(name, side_length_1, side_length_2, side_length_3);
}


Triangle::~Triangle()
{
}

double Triangle::get_area()
{
	return m_area;
}

std::string Triangle::get_as_string()
{
	std::string triangle_as_string = "[" + m_name + "]: " + std::to_string(m_area) + " cm";
	return triangle_as_string;
}

void Triangle::set_priangle_parameters(std::string name, float side_length_1, float side_length_2, float side_length_3)
{
	// TODO : add validation for this
	m_name = name;

	m_side_length_1 = side_length_1;
	m_side_length_2 = side_length_2;
	m_side_length_3 = side_length_3;

	CalcArea();
}

bool Triangle::operator > (Triangle& triangle) const
{
	return (m_area > triangle.get_area());
}

bool Triangle::operator < (Triangle& triangle) const
{
	return (m_area < triangle.get_area());
}

void Triangle::CalcArea()
{
	double half_perimeter;

	half_perimeter = (m_side_length_1 + m_side_length_2 + m_side_length_3) / 2;
	m_area = sqrt(half_perimeter * 
		(half_perimeter - m_side_length_1) * 
		(half_perimeter - m_side_length_2) * 
		(half_perimeter - m_side_length_3));
}