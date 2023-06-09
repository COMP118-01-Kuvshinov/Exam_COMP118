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
void EnterData(double matrix[][MAX_COL], int rowMax);

/** <code>main</code>Main function with a menu
* <BR>
* Return Returns 0
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

            break;
        case 2:

            break;
        case 3:

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
*/
void EnterData(double matrix[][MAX_COL], const int rowMax)
{
    assert(rowMax > 0 && rowMax <= MAX_ROW);

    for (int i = 0; i < rowMax; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {

        }
    }
}