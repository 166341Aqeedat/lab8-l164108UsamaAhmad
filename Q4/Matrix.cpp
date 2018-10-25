# include<iostream>
#include"Matrix.h"
using namespace std;


Matrix::Matrix()
{
	row = 0;
	col = 0;
	
}

Matrix::Matrix(int r, int c)
{
	row = r;
	col = c;
	mat = new int*[row];
	for (int i = 0; i < row; i++)
	{
		mat[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mat[i][j] = 0;
		}
	}
}

Matrix::Matrix(const Matrix& obj)
{
	this->row = obj.row;
	this->col = obj.col;
	for (int i = 0; i < row; i++)
	{
	for (int j = 0; j < col; j++)
	{
		this->mat[i][j] = obj.mat[i][j];
	}
	}
}

void Matrix::print()
{
	cout << " Matrix : "<< endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

void Matrix::input()
{
	cout << "Enter elements :- " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> mat[i][j];
		}
	}
}

void Matrix::display()
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

}

Matrix Matrix::operator +(const Matrix t) 
{
	Matrix temp(this->row, this->col);
	if (this->row != t.row || this->col != t.col)
	{
		cout << "\n Matrix ADDITION IS NOT POSSIBLE \n";

		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->col; j++)
			{
				temp.mat[i][j] = this->mat[i][j];
			}
		}
		return temp;
	}
	else
	{
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->col; j++)
			{
				temp.mat[i][j] = t.mat[i][j] + this->mat[i][j];
			}
		}
		return temp;
	}

}

Matrix Matrix::operator -(const Matrix t) 
{
	Matrix temp(this->row, this->col);
	if (this->row != t.row || this->col != t.col)
	{
		cout << "Matrix ADDITION IS NOT POSSIBLE "<<endl;

		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->col; j++)
			{
				temp.mat[i][j] = this->mat[i][j];
			}
		}
		return temp;
	}
	else
	{
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->col; j++)
			{
				temp.mat[i][j] = t.mat[i][j] - this->mat[i][j];
			}
		}
		return temp;
	}

}

Matrix Matrix::operator *(const Matrix t) 
{
	if (this->col != t.row)
	{
		Matrix temp(this->col, this->row);
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				temp.mat[i][j] = this->mat[i][j];
			}
		}
		return temp;
	}
	else
	{
		Matrix temp(this->col, t.row);
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < t.col; j++)
			{
				for (int k = 0; k < this->col; k++)
				{
					temp.mat[i][j] += this->mat[i][k] * t.mat[i][j];
				}
			}
		}
		return temp;
	}

}

bool Matrix :: operator ==(Matrix obj)
{
	int flag = 0;
	Matrix temp(row, col);
	if (row == obj.row && col == obj.col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (mat[i][j] == obj.mat[i][j])
				{
					flag = 1;
				}
				else
					break;

			}
		}
	}
	if (flag == 1)
	{
		return true;
	}
	else
		return false;
}

bool Matrix :: operator !=(Matrix obj)
{
	int flag = 0;
	Matrix temp(row, col);
	if (row == obj.row && col == obj.col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (mat[i][j] != obj.mat[i][j])
				{
					flag = 1;
				}
				else
					break;

			}
		}
	}
	if (flag == 1)
	{
		return false;
	}
	else
		return true;
}

Matrix Matrix::transpose(Matrix obj)
{
	Matrix temp(row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			temp.mat[j][i] = obj.mat[i][j];
		}
	}
	return temp;
}
Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
	{
	delete[]mat[i];
	}
	delete[]mat;
}