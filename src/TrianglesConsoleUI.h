#pragma once
#include <iostream>
#include <string>
#include "Triangle.h"
#include "SortedTrianglesVector.h"

class TrianglesConsoleUI
{
public:
	TrianglesConsoleUI();
	~TrianglesConsoleUI();
	void StartTrianglesEnteringDialog();

private:
	SortedTrianglesVector* m_sorted_triangles_vector;
	void StartReadingTriangleDialog(Triangle* triangle);
	void WriteSortedTrianglesVector();
};

