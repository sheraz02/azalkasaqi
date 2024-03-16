#include <iostream>

using namespace std;
//  Challenge # 1 
//  Sum of Two Numbers 
// int main(){
//     int x = 50;
//     int y = 100;
//     int total;
//     total = x + y;
//     cout << "Total: " << total << endl;
//     return 0;

// }


// int main(){
//     float Percentage = 0.58, SalesInMillion = 8.6, InLakhs, TotalSales;
//     InLakhs = SalesInMillion * 1000000;
//     cout << "Revenue in a year " << InLakhs << endl;
//     TotalSales = Percentage * InLakhs;
//     cout << "Total sales this year: " << TotalSales << endl;
    

// }


int main(){
    double purchase = 95, StateSaleTax = 0.04, CountrySaleTax = 0.02, TotalSaleTax, GST;
    TotalSaleTax = StateSaleTax + CountrySaleTax;
    cout << "Total Government Tax: " << TotalSaleTax << endl;
    GST = TotalSaleTax * purchase;
    cout << "GST: $" << GST << endl;
    return 0;
}