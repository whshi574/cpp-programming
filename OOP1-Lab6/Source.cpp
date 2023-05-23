#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <corecrt_math_defines.h>

bool CalcuArea(double CircleRadius) 
{
	if (CircleRadius <= 0) {
		std::cout<<"Please enter a correct input"<<std::endl;
		return 0;
	}

	double Area = M_PI * std::pow(CircleRadius, 2);
	std::cout << "The area of Circle is " << Area << std::endl;
	return 1;
}

bool CalcuSquareArea(double SquareLength)
{
	if (SquareLength <= 0) {
		std::cout << "Please enter a correct input" << std::endl;
		return 0;
	}

	double Area = std::pow(SquareLength, 2);
	std::cout << "The area of Square is " << Area << std::endl;
	return 1;
}

bool CalcuArea(double RectLength, double RectWidth)
{
	if ((RectLength <= 0) && (RectWidth <= 0)) {
		std::cout << "Please enter a correct input" << std::endl;
		return 0;
	}

	double Area = RectLength * RectWidth;
	std::cout << "The area of Rectangle is " << Area << std::endl;
	return 1;


}

bool CalcuArea(double TriA, double TriB, double TriC)
{
	bool bIsTriangle = ((TriA + TriB) > TriC) && ((TriA + TriC) > TriB) && ((TriC + TriB) > TriA);
	bIsTriangle = bIsTriangle && (TriA > 0) && (TriB > 0) && (TriC > 0);

	if (!bIsTriangle) {

		std::cout << "The wrong input, it is not a triangle " <<std::endl;
		return 0;
	}
	double s = (TriA + TriB + TriC) / 2.0;

	double Area = std::sqrt(s * (s - TriA) * (s - TriB) * (s - TriC));

	std::cout << "The area of Triangle is " << Area << std::endl;

	return 1;
}

bool CalcuCirfer(double CircleRadius)
{
	if (CircleRadius <= 0) {
		std::cout << "Please enter a correct input" << std::endl;
		return 0;
	}

	double Cirfer = M_PI * 2 * CircleRadius;
	std::cout << "The Circumference of Circle is " << Cirfer << std::endl;
	return 1;
}

bool CalcuSquareCirfer(double SquareLength)
{
	if (SquareLength <= 0) {
		std::cout << "Please enter a correct input" << std::endl;
		return 0;
	}

	double Cirfer = SquareLength*4;
	std::cout << "The Circumference of Square is " << Cirfer << std::endl;
	return 1;
}

bool CalcuCirfer(double RectLength, double RectWidth)
{
	if ((RectLength <= 0) && (RectWidth <= 0)) {
		std::cout << "Please enter a correct input" << std::endl;
		return 0;
	}

	double Cirfer = (RectLength + RectWidth)*2;
	std::cout << "The Circumference of Rectangle is " << Cirfer << std::endl;
	return 1;

}

bool CalcuCirfer(double TriA, double TriB, double TriC)
{
	bool bIsTriangle = ((TriA + TriB) > TriC) && ((TriA + TriC) > TriB) && ((TriC + TriB) > TriA);
	bIsTriangle = bIsTriangle && (TriA > 0) && (TriB > 0) && (TriC > 0);

	if (!bIsTriangle) {

		std::cout << "The wrong input, it is not a triangle " << std::endl;
		return 0;
	}
	

	double Cirfer = TriA+ TriB+ TriC;

	std::cout << "The Cirfer of Triangle is " << Cirfer << std::endl;

	return 1;
}

double FindLargestNum(double FirstNum, double SecondNum, double ThirdNum) 
{

	double LargestNum;

	if (FirstNum >= SecondNum) 
	{
		LargestNum = FirstNum;
	}
	else
	{
		LargestNum = SecondNum;
	}

	if (LargestNum>= ThirdNum)
	{
		return LargestNum;
	} 
	else
	{
		LargestNum = ThirdNum;
		return LargestNum;
	}

}



void CalcuAreaPage() {

#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	std::cout << "========Calculate area of figures========" << std::endl;
	std::cout << "This function have the following figures" << std::endl;
	std::cout << "[1] Circle" << std::endl;
	std::cout << "[2] Rectangle" << std::endl;
	std::cout << "[3] Triangle" << std::endl;
	std::cout << "[4] Square" << std::endl;
	std::cout << "Please enter the number what you want to Calculate area of figure" << std::endl;

	int InputIndex;

	bool bIsGetInput = 0;
	bool bIsGetArea = 0;

	double InputCircleRadius;

	double SquareLength;
	double RectLength;
	double RectWidth;

	double TriA;
	double TriB;
	double TriC;

	do 
{
	std::cin >> InputIndex;
	
		switch (InputIndex)
		{
		case 1:
			do 
			{
				std::cout << "Please enter the CircleRadius" << std::endl;
				std::cin >> InputCircleRadius;

				bIsGetArea = CalcuArea(InputCircleRadius);

			} while (!bIsGetArea);

			break;
		case 2:
			do
			{
				std::cout << "Please enter the RectLength and RectWidth" << std::endl;

				std::cin >> RectLength;
				std::cin >> RectWidth;

				bIsGetArea = CalcuArea(RectLength, RectWidth);

			} while (!bIsGetArea);

			break;
		case 3:
			do
			{
				std::cout << "Please enter the three Triangle Length" << std::endl;

				std::cin >> TriA>> TriB>> TriC;

				bIsGetArea = CalcuArea(TriA, TriB, TriC);

			} while (!bIsGetArea);

			break;
		case 4:
			do 
			{
				std::cout << "Please enter the Square Length" << std::endl;

				std::cin >> SquareLength;

				bIsGetArea = CalcuSquareArea(SquareLength);
				
			} while (!bIsGetArea);

			break;
		default:
			std::cout << "Please enter again, you enter a wrong input" << std::endl;
			bIsGetInput = 0;
			break;
		}
} while (bIsGetInput);

}

void CalcuCircumferencePage() 
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	std::cout << "========Calculate Circumference of figures========" << std::endl;
	std::cout << "This function have the following figures" << std::endl;
	std::cout << "[1] Circle" << std::endl;
	std::cout << "[2] Rectangle" << std::endl;
	std::cout << "[3] Triangle" << std::endl;
	std::cout << "[4] Square" << std::endl;
	std::cout << "Please enter the number what you want to Calculate Circumference of figure" << std::endl;

	int InputIndex;

	bool bIsGetInput = 1;
	bool bIsGetCirfer = 1;

	double CircleRadius;

	double RectangleLength;
	double RectangleWidth;

	double TriA, TriB, TriC;

	double SquareLength;


	do 
	{
		std::cin >> InputIndex;

		switch (InputIndex)
		{
		case 1:
			while (bIsGetCirfer)
			{
				std::cin >> CircleRadius;

				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					//std::cout << "Please enter a correct input" << std::endl;
					continue;
				}

				bIsGetCirfer = CalcuCirfer(CircleRadius);

				if (!bIsGetCirfer)
				{
					std::cout << "Please enter a correct input" << std::endl;
					bIsGetCirfer = 1;
					continue;
				}

				bIsGetCirfer = 0;
			}

			bIsGetInput = 1;
			break;
		case 2:
			while (bIsGetCirfer)
			{
				std::cin >> RectangleLength >> RectangleWidth;

				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					//std::cout << "Please enter a correct input" << std::endl;
					continue;
				}

				bIsGetCirfer = CalcuCirfer(RectangleLength, RectangleWidth);

				if (!bIsGetCirfer)
				{
					std::cout << "Please enter a correct input" << std::endl;
					bIsGetCirfer = 1;
					continue;
				}

				bIsGetCirfer = 0;
			}

			bIsGetInput = 1;
			break;
		case 3:
			while (bIsGetCirfer)
			{
				std::cin >> TriA >> TriB >> TriC;

				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Please enter a correct input" << std::endl;
					continue;
				}

				bIsGetCirfer = CalcuCirfer(TriA, TriB, TriC);

				if (!bIsGetCirfer)
				{
					//std::cout << "Please enter a correct input" << std::endl;
					bIsGetCirfer = 1;
					continue;
				}

				bIsGetCirfer = 0;
			}

			bIsGetInput = 1;
			break;
		case 4:
			while (bIsGetCirfer)
			{
				std::cin >> SquareLength;

				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Please enter a correct input" << std::endl;
					continue;
				}

				bIsGetCirfer = CalcuSquareCirfer(SquareLength);

				if (!bIsGetCirfer)
				{
					//std::cout << "Please enter a correct input" << std::endl;
					bIsGetCirfer = 1;
					continue;
				}

				bIsGetCirfer = 0;
			}

			bIsGetInput = 1;
			break;
		default:
			std::cout << "Please enter a correct index input" << std::endl;
			bIsGetInput = 0;
			break;
		}
	} while (!bIsGetInput);
}

void FindLargestNumPage() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	std::cout << "========Get the largest number from three number========" << std::endl;
	std::cout << "Please enter three number" << std::endl;

	bool bIsGetNum = 0;
	
	double FirstNum;
	double SecondNum;
	double ThirdNum;

	double LargestNum;

	while (!bIsGetNum) {

		std::cin >> FirstNum >> SecondNum >> ThirdNum;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//std::cout << "Please enter a correct input" << std::endl;
			bIsGetNum = 0;
			continue;
		}

		LargestNum = FindLargestNum(FirstNum, SecondNum, ThirdNum);

		std::cout << "The largest number is " << LargestNum<<std::endl;

		bIsGetNum = 1;
	}

}

void MainPage() {

	std::cout << "========Welcome to the figure calculate system========" << std::endl;
	std::cout << "This system have the following functions" << std::endl;
	std::cout << "[1] Calculate area of figures" << std::endl;
	std::cout << "[2] Calculate circumference of figures" << std::endl;
	std::cout << "[3] Find largest number" << std::endl;
	std::cout << "Please enter the number what you want to use the function" << std::endl;

	int InputIndex;
	bool bIsGetInput = 0;

	do 
	{
		std::cin >> InputIndex;

		switch (InputIndex)
		{
		case 1:
			CalcuAreaPage();
			bIsGetInput = 1;
			break;
		case 2:
			CalcuCircumferencePage();
			bIsGetInput = 1;
			break;
		case 3:
			FindLargestNumPage();
			bIsGetInput = 1;
			break;
		default:
			std::cout << "Please enter again, you enter a wrong input" << std::endl;
			bIsGetInput = 0;
			break;
		}
	} while (!bIsGetInput);
	

}


/////////////////////////////////////***STARTING POINT***////////////////////////////////////////////////////
int main()
{

	MainPage();

	return 0;
}

// bad practices with goto
// never use it next time
// Rustam_Z
