/* 
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.
*/
#include<iostream>
using namespace std;

int main()
{
    float purchase = 95.0;
    float stateTax = 0.04;
    float countytax = 0.02;
    float totaltax, taxprice;

    totaltax = stateTax + countytax;
    taxprice = purchase * totaltax;

    cout << taxprice;

    return 0;
}