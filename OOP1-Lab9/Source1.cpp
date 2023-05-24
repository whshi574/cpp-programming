#include <iostream>
#include <string>
#include <vector>


using namespace std;

void TransposeMatrix(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB);

void SumMatrix(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB);

void ProductMatrix(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB);

void MatrixOperatePage(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB);

void ReadMatrixInput(vector<vector<int>>& Matrix, int& MatrixRow, int& MatrixColumns);

void DisplayMatrixInput(vector<vector<int>>& Matrix);


void TransposeMatrix(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB)
{
	int MatrixARow = MatrixA.size();
	int MatrixAColumns = MatrixA[0].size();

	int MatrixBRow = MatrixB.size();
	int MatrixBColumns = MatrixB[0].size();

	//Remeber the transpose matrix should be opposite size
	vector<vector<int>> MatrixATranspose(MatrixAColumns, vector<int>(MatrixARow));

	vector<vector<int>> MatrixBTranspose(MatrixBColumns, vector<int>(MatrixBRow));

	for (int Row = 0; Row < MatrixARow; Row++) 
	{
		for (int Column = 0; Column < MatrixAColumns; Column++) 
		{
			MatrixATranspose[Column][Row] = MatrixA[Row][Column];
		}
	}

	cout << "The TransposeMatrix of MatrixA is" << endl;

	DisplayMatrixInput(MatrixATranspose);

	for (int MatrixRow = 0; MatrixRow < MatrixBRow; MatrixRow++)
	{
		for (int MatrixColumn = 0; MatrixColumn < MatrixBColumns; MatrixColumn++)
		{
			MatrixBTranspose[MatrixColumn][MatrixRow] = MatrixB[MatrixRow][MatrixColumn];
		}
	}

	cout << "The TransposeMatrix of MatrixB is" << endl;

	DisplayMatrixInput(MatrixBTranspose);

}

void SumMatrix(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB)
{
	//Matrix Check
	int MatrixARow = MatrixA.size();
	int MatrixAColumns = MatrixA[0].size();

	int MatrixBRow = MatrixB.size();
	int MatrixBColumns = MatrixB[0].size();

	if ((MatrixARow != MatrixBRow) || (MatrixAColumns != MatrixBColumns))
	{
		cout << "Two matrix can not sum, because they have different dimensions" << endl;
		return;
	}

	vector<vector<int>> MatrixSum(MatrixARow, vector<int>(MatrixAColumns));
	cout << "The sum matrix is :" << endl;

	//Matrix Sum
	for (int MatrixRow = 0; MatrixRow < MatrixARow; MatrixRow++) 
	{
		for (int MatrixColumns = 0; MatrixColumns < MatrixAColumns; MatrixColumns++) 
		{
			MatrixSum[MatrixRow][MatrixColumns] = MatrixA[MatrixRow][MatrixColumns] + MatrixB[MatrixRow][MatrixColumns];
			cout << MatrixSum[MatrixRow][MatrixColumns] << " ";
		}
		cout << endl;
	}

}

void ProductMatrix(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB)
{
	//Matrix Check
	
	int InputIndex;
	bool bIsGetInput = 0;

	int MatrixARow = MatrixA.size();
	int MatrixAColumns = MatrixA[0].size();

	int MatrixBRow = MatrixB.size();
	int MatrixBColumns = MatrixB[0].size();

	cout << "You want to MatrixA * MatrixB (Enter 1) or MatrixB * MatrixA (Enter 2)" << endl;
	cin >> InputIndex;

	//Matrix Check
	while (!bIsGetInput) {
		switch (InputIndex)
		{
		case 1:
			if (MatrixAColumns == MatrixBRow) {

				vector<vector<int>> MatrixSum(MatrixARow, vector<int>(MatrixBColumns));

				for (int i = 0; i < MatrixARow; ++i)
				{
					for (int j = 0; j < MatrixBColumns; ++j)
					{
						for (int k = 0; k< MatrixAColumns; k++)
						{
							MatrixSum[i][j] += MatrixA[i][k] * MatrixB[k][j];
						}
					}
				}

				DisplayMatrixInput(MatrixSum);
			}
			else {
				cout << "Two matrix can not product, because A's colmuns != B's row" << endl;
				bIsGetInput = 0;
				return;
			}
			bIsGetInput = 1;
			break;

		case 2:
			if (MatrixBColumns == MatrixARow) {

				vector<vector<int>> MatrixSum(MatrixBRow, vector<int>(MatrixAColumns));

				for (int i = 0; i < MatrixBRow; ++i)
				{
					for (int j = 0; j < MatrixAColumns; ++j)
					{
						for (int k = 0; k < MatrixBColumns; k++)
						{
							MatrixSum[i][j] += MatrixA[i][k] * MatrixB[k][j];
						}
					}
				}

				DisplayMatrixInput(MatrixSum);
			}
			else {
				cout << "Two matrix can not product, because A's colmuns != B's row" << endl;
				bIsGetInput = 0;
				return;
			}
			bIsGetInput = 1;
			break;
		default:
			cout << "You enter a wrong choice, please enter again" << endl;
			bIsGetInput = 0;
			break;
		}
	}

}

void MatrixOperatePage(vector<vector<int>>& MatrixA, vector<vector<int>>& MatrixB)
{
	system("cls");
	cout << "=====Welcome to the MatrixOperatePage=====" << endl;
	cout << "Now you have two matrix can be operate" << endl;

	cout << "Matrix A" << endl;
	DisplayMatrixInput(MatrixA);

	cout << "Matrix B" << endl;
	DisplayMatrixInput(MatrixB);

	cout << "Please choose what function you want to use" << endl;
	cout << "[1] The sum of two matrices" << endl;
	cout << "[2] The transpose of one matrice" << endl;
	cout << "[3] The product of two matrices" << endl;
	cout << "Please enter your choice" << endl;

	int InputIndex;
	bool bIsGetInput = 0;


	while (!bIsGetInput)
	{	
		cin >> InputIndex;

		switch (InputIndex)
		{
			case 1:
				SumMatrix(MatrixA, MatrixB);
				bIsGetInput = 1;
				break;
			case 2:
				TransposeMatrix(MatrixA, MatrixB);
				bIsGetInput = 1;
				break;
			case 3:
				ProductMatrix(MatrixA, MatrixB);
				bIsGetInput = 1;
				break;
			default:
				cout << "You enter a wrong choice, please enter your choice again" << endl;
				bIsGetInput = 0;
				break;
		}
	}

}

void ReadMatrixInput(vector<vector<int>>& Matrix, int& MatrixRow, int& MatrixColumns)
{
	cout << "Please enter the Matrix 's message" << endl;

	cout << "The number of MatrixRow :" << endl;
	cin >> MatrixRow;
	
	cout << "The number of MatrixColumns :" << endl;
	cin >> MatrixColumns;
	
	//input check
	if ((MatrixRow <= 0) && (MatrixColumns<= 0))
	{
		cout << "MatrixRow and matrixColumns can not smaller than 0" << endl;
		ReadMatrixInput(Matrix, MatrixRow, MatrixColumns);
	}

	//Resize the matrix row value
	Matrix.resize(MatrixRow);

	//Resize the matrix row' s column value
	for (int ResizeRow = 0; ResizeRow < MatrixRow; ResizeRow++) {
		Matrix[ResizeRow].resize(MatrixColumns);
	}

	//Get matrix value
	for (int row = 0;row < MatrixRow;row++)
	{
		for (int columns = 0; columns< MatrixColumns; columns++)
		{
			cout << "The Matrix 's " << row<<" row "<< columns<<" columns value is "<< endl;
			cin >> Matrix[row][columns];
		}
	}
}

void DisplayMatrixInput(vector<vector<int>>& Matrix) 
{
	int MatrixRow = Matrix.size();
	int MatrixColumns = Matrix[0].size();

	for (int row = 0; row < MatrixRow; row++)
	{
		for (int column = 0; column < MatrixColumns; column++)
		{
			cout << Matrix[row][column]<<" ";
		}
		cout << endl;
	}
}

int main()
{
	int MatrixARow = 10;
	int MatrixAColumns = 10;

	int MatrixBRow = 10;
	int MatrixBColumns = 10;

	vector<vector<int>> MatrixA(MatrixARow, vector<int>(MatrixAColumns));
	vector<vector<int>> MatrixB(MatrixBRow, vector<int>(MatrixBColumns));

	cout << "The Matrix A" << endl;
	ReadMatrixInput(MatrixA, MatrixARow, MatrixAColumns);
	DisplayMatrixInput(MatrixA);
	
	cout << "The Matrix B" << endl;
	ReadMatrixInput(MatrixB, MatrixBRow, MatrixBColumns);
	DisplayMatrixInput(MatrixB);
	
	MatrixOperatePage(MatrixA, MatrixB);

	return 0;
}