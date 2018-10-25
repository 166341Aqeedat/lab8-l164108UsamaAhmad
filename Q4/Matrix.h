class Matrix
{
private:
	int **mat;
	int row;
	int col;

public:
	Matrix();
	Matrix(int, int);
	void input();
	void print();
	void display();
	Matrix operator +(Matrix);
	Matrix operator -(Matrix);
	Matrix operator *(Matrix);
	bool operator ==(Matrix);
	bool operator !=(Matrix);
	Matrix transpose(Matrix);
	Matrix(const Matrix& obj);
	~Matrix();
};