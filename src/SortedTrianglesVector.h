#pragma once

#include <vector>
#include <algorithm>
#include "Triangle.h"

class SortedTrianglesVector
{
public:
	void PushBack(Triangle triangle_to_push);
	std::vector<Triangle> get_triangles_vector();
private:
	std::vector <Triangle> m_triangles_vector;
	void SortTriangles();
};

