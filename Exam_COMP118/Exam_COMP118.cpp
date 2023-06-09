/** \file Exam_COMP118.cpp
* \brief Working with a matrix
* \details Program that is manipulating with a matrix of doubles
* \author Igor Kuvshinov
* \date 09.06.2023
* \version v0.1
* */

#include <iostream>
#include <cassert>

using namespace std;

// Constants
const int MAX_ROW = 4;
const int MAX_COL = 3;

//Function prototypes
void EnterData(double matrix[][MAX_COL], const int rowMax);
double SumOfAll(const double matrix[][MAX_COL], const int rowMax);
void PrintMatrix(const double matrix[][MAX_COL], const int rowMax);

/** <code>main</code>Main function with a menu
* <BR>
* return Returns 0
*/
int main()
{
    double matrix[MAX_ROW][MAX_COL];
    int choice = 0;

    do
    {
        cout << "1) Enter data in matrix (range -2.5 to 2.5)" << endl
            << "2) Sum of all numbers" << endl
            << "3) Show data in matrix" << endl
            << "4) Exit" << endl
            << "Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            EnterData(matrix, MAX_ROW);
            break;
        case 2:
            cout << "Sum of all numbers is " << SumOfAll(matrix, MAX_ROW) << endl;
            break;
        case 3:
            PrintMatrix(matrix, MAX_ROW);
            break;
        case 4:
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
        }

        cout << endl;
    } while (choice != 4);
    
    cout << "Have a nice day!" << endl;

    return 0;
}

/** <code>EnterData</code> Function that asks a user to
* input values into a matrix
* <BR>
* @param matrix Array of numbers
* @param rowMax Number of rows in the matrix
*/
void EnterData(double matrix[][MAX_COL], const int rowMax)
{
    assert(rowMax > 0 && rowMax <= MAX_ROW);

    cout << "Enter data in matrix: " << endl;
    for (int i = 0; i < rowMax; i++)
    {
        cout << "R" << i + 1 << ": " << endl;
        for (int j = 0; j < MAX_COL; j++)
        {
            cin >> matrix[i][j];
            while (matrix[i][j] < -2.5 || matrix[i][j] > 2.5)
            {
                cout << "Invalid input! Has to be in the range from -2.5 to 2.5: ";
                cin >> matrix[i][j];
            }
        }
    }
}

/** <code>SumOfAll</code> Function that returns a sum of
* all numbers in the matrix
* <BR>
* @param matrix Array of numbers
* @param rowMax Number of rows in the matrix
* return Returns the sum of all numbers in the matrix
*/
double SumOfAll(const double matrix[][MAX_COL], const int rowMax)
{
    assert(rowMax > 0 && rowMax <= MAX_ROW);

    double sum = 0;

    for (int i = 0; i < rowMax; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

/** <code>PrintMatrix</code> Function that prints the matrix
* <BR>
* @param matrix Array of numbers
* @param rowMax Number of rows in the matrix
*/
void PrintMatrix(const double matrix[][MAX_COL], const int rowMax)
{
    assert(rowMax > 0 && rowMax <= MAX_ROW);

    for (int i = 0; i < rowMax; i++)
    {
        cout << "R" << i + 1 << ": ";
        for (int j = 0; j < MAX_COL; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}