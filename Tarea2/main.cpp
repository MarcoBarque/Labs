#include <iostream>
#include "matrix.hpp"

//Marco Barquero (C30970), Andres Chacon (C32026)

int main(){
	//Defautl Matrix
	std::cout << "Fist test: Default matrix." << std::endl;

	Matrix df;

	std::cout << "The default matrix has " << df.get_rows() << " rows and " << df.get_cols() << " columns. The default matrix is: " <<std::endl;
	df.print();

	//Personilized Matrix
	std::cout << "\nSecond test: Personilized matrix." << std::endl;
	int rows;
	int cols;
	
	std::cout << "To see all the functionalities of the code, please do not enter a 3x3 matrix. " << std::endl;
	std::cout << "Enter the number of rows of the personilized matrix: ";
	std::cin >> rows;
	std::cout << "Enter the number of columns of the personilized matrix: ";
	std::cin >> cols;
	
	Matrix pers = Matrix(rows,cols);

	std::cout << "The personilized matrix has " << pers.get_rows() << " rows and " << pers.get_cols() << " columns. The peronilized matrix is: " <<std::endl;
	pers.print();	

	//Copy constructror
	std::cout << "\nThird test: Copy constructor and assignment operator" << std::endl;
	std::cout << "A matrix called 'copy' has been created, it is a copy of the personilized matrix. This is the copied matrix: " << std::endl;
       	
	Matrix copy = pers;	
	copy.print();

	std::cout << "\nNow a matrix 4x5 will be assing to the 'copy' matrix. This is the result: " << std::endl;
        copy = Matrix(4,5);
	copy.print();	

	//Overrides
	std::cout << "\nFourth test: overrides" << std::endl;
	
	std::cout << "The sum will be overrided to create a matrix that is the personilized matrix added to itself. Here is the result: " << std::endl;
	Matrix two_pers = pers + pers;
	two_pers.print();

	std::cout << "\nIf the dimensions of the matrices that are being add up are not the same, the sum will return the default matrix and an error messagge: " << std::endl;
	Matrix wrong = df + pers;

	std::cout << "\nNow, if the personilized matrix is substracted from the resultant matrix of the sum, the new matrix must be the same as the personilized. This is the result: " << std::endl;
	Matrix sub_pers = two_pers - pers;
	sub_pers.print();

	std::cout << "\nTo test the multiplication of matrices, two matrices with dimension 5x11 and 11x3 will be multiplied: " << std::endl;
	Matrix A = Matrix(5,11);
	Matrix B = Matrix(11,3);
	Matrix mult = A*B;
	mult.print();

	std::cout << "\nAnd here is what happens if the matrices are multiplied as the 11x3 matrix times the 5x11 one: " <<std::endl;
	Matrix inv_mult = B*A;
	inv_mult.print();

	return 0;
}
