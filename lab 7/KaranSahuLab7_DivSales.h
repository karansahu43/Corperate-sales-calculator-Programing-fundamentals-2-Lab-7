// Author:  Karan Sahu
// Assignment Number: Lab 7
// File Name: 
// Course/Section: COSC 1337 Section 003
// Due Date:  
// Instructor: Bernard Ku
//

#ifndef KARANSAHULAB7_DIVSALES_H
#define KARANSAHULAB7_DIVSALES_H

class DivSales
{
private:
    double sales[4];        // There are 4 quarters
    static double totalSales;
public:
    void setSales(double, double, double, double);
    double getQSales(int q)
       { return sales[q]; }
    double getCorpSales()
       { return totalSales; }
};

#endif
