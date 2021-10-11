#include "TrianglesConsoleUI.h"

TrianglesConsoleUI::TrianglesConsoleUI()
{
	m_sorted_triangles_vector = new SortedTrianglesVector();
}

TrianglesConsoleUI::~TrianglesConsoleUI()
{
	if (m_sorted_triangles_vector != NULL)
		delete m_sorted_triangles_vector;
}

void TrianglesConsoleUI::StartTrianglesEnteringDialog()
{
	char user_answer[3];

	m_sorted_triangles_vector = new SortedTrianglesVector();
	Triangle* triangle = new Triangle();

	do
	{
		StartReadingTriangleDialog(triangle);
		m_sorted_triangles_vector->PushBack(*triangle);

		std::cout << "\n";
		std::cout << "If you want to compare the next envelopes, enter (y/yes):\n";
		std::cin >> user_answer;
	} while (strcmp(user_answer, "y") == 0 || strcmp(user_answer, "yes") == 0);

	WriteSortedTrianglesVector();

	delete triangle;
}

void TrianglesConsoleUI::StartReadingTriangleDialog(Triangle* triangle)
{
	
	std::string name;
	float side_size_1, side_size_2, side_size_3;

	std::cout << "\n";
	std::cout << "Enter the triangle name (up to 50 characters):\n";
	std::cin >> name;

	std::cout << "Enter side #1 of the triangle:\n";
	std::cin >> side_size_1;

	std::cout << "Enter side #2 of the triangle:\n";
	std::cin >> side_size_2;

	std::cout << "Enter side #3 of the triangle:\n";
	std::cin >> side_size_3;

	triangle->set_priangle_parameters(name, side_size_1, side_size_2, side_size_3);

	/*
	if (!std::cin)				// or if(cin.fail())
	{
		// user didn't input a number
		std::cin.clear();		// reset failbit
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input

		// TODO: replace with throw-operator (and create responsible exception class)
		std::cout << "Please enter a numeric value\n";
		side_size_1 = 1;
	}

	std::cout << "Enter second side of the envelope:\n";
	std::cin >> side_size_2;

	if (!std::cin)				// or if(cin.fail())
	{
		// user didn't input a number
		std::cin.clear();		// reset failbit
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input

		// TODO: replace with throw-operator (and create responsible exception class)
		std::cout << "Please enter a numeric value\n";
		side_size_2 = 1;
	}

	try
	{
		envelope->set_side_sizes(side_size_1, side_size_2);
	}
	catch (InvalidEnvelopeSizeException size_exception)
	{
		std::cout << size_exception.get_error_message() << " " << size_exception.get_size_value() << "\n";
	}
	*/
}

void TrianglesConsoleUI::WriteSortedTrianglesVector()
{
	std::vector<Triangle> triangles_vector = m_sorted_triangles_vector->get_triangles_vector();
	std::cout << "============ Triangles List ===========\n";

	for (int i = 0; i < triangles_vector.size(); i++)
	{
		std::cout << triangles_vector[i].get_as_string() << "\n";
	}
}
