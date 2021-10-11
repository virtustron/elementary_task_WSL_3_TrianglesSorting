#include "SortedTrianglesVector.h"

void SortedTrianglesVector::PushBack(Triangle triangle_to_push)
{
	m_triangles_vector.push_back(triangle_to_push);
}

std::vector<Triangle> SortedTrianglesVector::get_triangles_vector()
{
	SortTriangles();
	return m_triangles_vector;
}

void SortedTrianglesVector::SortTriangles()
{
	std::sort(m_triangles_vector.begin(), m_triangles_vector.end());
}