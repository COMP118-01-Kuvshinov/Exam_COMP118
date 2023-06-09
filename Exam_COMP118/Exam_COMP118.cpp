/** \file Exam_COMP118.cpp
* \brief Working with a matrix
* \details Program that is manipulating with a matrix of doubles
* \author Igor Kuvshinov
* \date 09.06.2023
* \version v0.1
* */

#include <iostream>

using namespace std;

// Constants
const int MAX_ROW = 4;
const int MAX_COL = 3;

//Function prototypes

/** <code>main</code>Main function
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

        default:
            cout << "Invalid input!" << endl;
            break;
        }
    } while (choice != 4);
    

    return 0;
}