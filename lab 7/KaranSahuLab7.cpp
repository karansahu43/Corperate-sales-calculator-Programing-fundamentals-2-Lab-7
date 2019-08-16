// Author:  Karan Sahu
// Assignment Number: Lab 7
// File Name: KaranSahuLab7.cpp
// Course/Section: COSC 1337 Section 003
// Due Date:  
// Instructor: Bernard Ku
//
//this program will take in your sales for six divions consiting of 4 qourters and show u the total.

//  Chapter 11 --  Assignment 7,  Corporate Sales

#include <iostream>
#include <iomanip>
#include "KaranSahuLab7_DivSales.cpp"

using namespace std;

const int NUM_DIV = 6;   // Number of divisions


// Function prototype
void salesByDiv(DivSales []);


//                       salesByDiv                               
// The following function displays a list of sales figures        
// by division.                                                   

void salesByDiv(DivSales d[])
{
    for (int div = 0; div < NUM_DIV; div++)
    {
        cout << "Sales for Division ";
        cout << (div + 1) << endl;
        for (int qtr = 0; qtr < 4; qtr++)
        {
            cout << "\tQuarter " << (qtr + 1) << ": $";
            cout << d[div].getQSales(qtr) << endl;
        }
    }
    cout << "Press Enter to Continue.";
    cin.get();
}

int main()
{    
    DivSales divisions[NUM_DIV];
    double qtrs[4];

    for (int div = 0; div < NUM_DIV; div++)
    {
        cout << "Enter sales data for Division ";
        cout << (div + 1) << endl;
        for (int q = 0; q < 4; q++)
        {
            cout << "\tQuarter " << (q + 1) << ": ";
            do
            {
                cin >> qtrs[q];
                if (qtrs[q] < 0)
                    cout << "Please enter 0 or greater.\n";
            } while (qtrs[q] < 0);
        }
        divisions[div].setSales(qtrs[0], qtrs[1], qtrs[2], qtrs[3]);
    }
    cout << setprecision(2);
    cout << fixed << showpoint;
    salesByDiv(divisions);
    cout << "\nTotal Corporate Sales: $" << divisions[0].getCorpSales() << endl;
    return 0;
}



/* SAMPLE OUTPUT

Enter sales data for Division 1
        Quarter 1: 4500.00
        Quarter 2: 6500
        Quarter 3: 7500
        Quarter 4: 12000
Enter sales data for Division 2
        Quarter 1: 8700
        Quarter 2: 4300
        Quarter 3: 5500
        Quarter 4: 10000
Enter sales data for Division 3
        Quarter 1: 6700
        Quarter 2: 2300
        Quarter 3: 1200
        Quarter 4: 5000
Enter sales data for Division 4
        Quarter 1: 870
        Quarter 2: 3400
        Quarter 3: 340
        Quarter 4: 4500
Enter sales data for Division 5
        Quarter 1: 450
        Quarter 2: 200
        Quarter 3: 400
        Quarter 4: 900
Enter sales data for Division 6
        Quarter 1: 890
        Quarter 2: 340
        Quarter 3: 230
        Quarter 4: 230
Sales for Division 1
        Quarter 1: $4500.00
        Quarter 2: $6500.00
        Quarter 3: $7500.00
        Quarter 4: $12000.00
Sales for Division 2
        Quarter 1: $8700.00
        Quarter 2: $4300.00
        Quarter 3: $5500.00
        Quarter 4: $10000.00
Sales for Division 3
        Quarter 1: $6700.00
        Quarter 2: $2300.00
        Quarter 3: $1200.00
        Quarter 4: $5000.00
Sales for Division 4
        Quarter 1: $870.00
        Quarter 2: $3400.00
        Quarter 3: $340.00
        Quarter 4: $4500.00
Sales for Division 5
        Quarter 1: $450.00
        Quarter 2: $200.00
        Quarter 3: $400.00
        Quarter 4: $900.00
Sales for Division 6
        Quarter 1: $890.00
        Quarter 2: $340.00
        Quarter 3: $230.00
        Quarter 4: $230.00
Press Enter to Continue.
Total Corporate Sales: $86950.00

*/

