/*
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.
*/
#include<iostream>
using namespace std;

int main()
{
    double sales_percent = 0.58;    //58 percent
    double sales = 8600000.0;     //$8.6 million
    double total;   //total east coast division will generate for company

    total = sales * sales_percent;

    cout << total;

    return 0;
}