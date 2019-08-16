// Author:  Karan Sahu
// Assignment Number: Lab 7
// File Name: 
// Course/Section: COSC 1337 Section 003
// Due Date:  
// Instructor: Bernard Ku
//

#include "KaranSahuLab7_DivSales.h"
#ifndef KARANSAHULAB7_DIVSALES_CPP
#define KARANSAHULAB7_DIVSALES_CPP
#include <iostream>

using namespace std;

// Static member variable definition
double DivSales::totalSales;



//                      setSales                                 
// Sets the sales from each division and computes total sales.   *


void DivSales::setSales(double q1, double q2, double q3, double q4)
{
    if (q1 < 0 || q2 < 0 || q3 < 0 || q4 < 0)
    {
        cout << "ERROR: Only provide positive values for sales.\n";
        return;
    }
    sales[0] = q1;
    sales[1] = q2;
    sales[2] = q3;
    sales[3] = q4;
    for (int count = 0; count < 4; count++)
        totalSales += sales[count];
}

#endif
