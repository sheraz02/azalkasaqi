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


// int main(){
//     double purchase = 95, StateSaleTax = 0.04, CountrySaleTax = 0.02, TotalSaleTax, GST;
//     TotalSaleTax = StateSaleTax + CountrySaleTax;
//     cout << "Total Government Tax: " << TotalSaleTax << endl;
//     GST = TotalSaleTax * purchase;
//     cout << "GST: $" << GST << endl;
//     return 0;
// }

// int main(){
//     float MealCharge = 88.67, tax = 0.0675, tip = 0.20, MealCost, Tip, TaxAmount, TipAmount, TotalBill;
//         TaxAmount = MealCharge * tax;
//         cout << "Tax Amount: $" << TaxAmount << endl;
//         TipAmount = (MealCharge + TaxAmount) * tip;
//         cout << "Tip Amount: $" << TipAmount << endl;
//         cout << "Meal Cost: $" << MealCharge << endl;
//         TotalBill = TipAmount + TaxAmount + MealCharge;
//         cout << "Total Bill: $" << TotalBill << endl;
//         return 0;

// }


// int main(){
//     int a=28, b=32, c=37, d=24, e=33, sum, average;
//         sum = a+b+c+d+e;
//         average = sum / 5;
//         cout << "Average: " << average << endl;
//         return 0; 
// }


// int main(){
//     int PayAmount = 2200, PayPeriod = 26, AnnualPay;
//         AnnualPay = PayAmount * PayPeriod;
//         cout << "Total Annual Pay: $" << AnnualPay << endl;
//         return 0;
// }

// int main(){
//     const double MMperYear = 1.5;
//         cout << "Ocean Level in 5 years: " << MMperYear *5 << "MM" << endl;
//         cout << "Ocean Level in 7 years: " << MMperYear *7 << "MM" << endl;
//         cout << "Ocean Level in 10 years: " << MMperYear *10 << 
//         "MM" << endl;

//         return 0;
// }

// int main(){
//     const float TAX = 0.07;
//         float item1=15.95,
//             item2=24.95,
//             item3=6.95,
//             item4=12.95,
//             item5=3.95, SubTotal, SalesTax, Total;
//         SubTotal = item1 + item2 + item3 + item4 + item5;
//         SalesTax = SubTotal * TAX;
//         Total = SubTotal + SalesTax;

//         cout << "Sub Total: $" << SubTotal << endl;
//         cout << "Tax Amount: $" << SalesTax << endl;
//         cout << "Total: $" << Total << endl;
//     return 0;
// }



// int main(){
//     cout << "Char: " << sizeof(char) << " bytes" << endl;
//     cout << "Int: " << sizeof(int) << " bytes" << endl;
//     cout << "Float: " << sizeof(float) << " bytes" << endl;
//     cout << "Double: " << sizeof(double) << " bytes" << endl;
// }


// int main()
// {
//     const float MilesTravelled = 375,
//                 GasInGallon = 15;
//     float MPG = MilesTravelled / GasInGallon;
//     cout << MPG << " Miles Per Gallon.\n";
//     return 0;
// }

// int main(){
//     double InTown = 23.5,
//            OnHighway = 28.9;
//     int GasTank = 20, Distance;
//     Distance = InTown * GasTank;
//     cout << "Distance travelled in town: " << Distance << endl;
//     Distance = OnHighway * GasTank;
//     cout << "Distance travelled on Highway: " << Distance << endl;
//     return 0;
// }

// int main(){
//     const int acre = 43560;
//     int land = 391876,
//         NumberOfAcres = land / acre;

//         cout << "391876 square feet is equivalent to " << NumberOfAcres << " acres." << endl;

//         return 0;
// }

// int main(){
//     string name, address, state, college, major;
//     int ZipCode, Phone;
//     cout << "Your Name? ";
//     cin >> name;
//     cout << "Address? ";
//     cin >> address;
//     cout << "What's your state? ";
//     cin >> state;
//     cout << "Zip Code? ";
//     cin >> ZipCode;
//     cout << "Phone Number? ";
//     cin >> Phone;
//     cout << "Your college name? ";
//     cin >> college;
//     cout << "What's your major? ";
//     cin >> major;

//     cout << "Hello, " << name << ". \nWelcome to azalkasaqi. We've noted your " << address << ", " << state << "-" << ZipCode << ". Our team will call you soon on " << Phone << ". Feel free to go to your college (" << college << "), and study your subject (" << major << ").";

//     return 0;
// }

// int main(){
//     for(int i = 0; i<1000; i++){
//         if (i == 500){
//             break;
//         }
//         cout << i;
//     }
//     return 0;
// }


// int main(){
//     double num, dum;
//     cout << "Enter Numerator: ";
//     cin >> num;
//     cout << "Enter Dnominator: ";
//     cin >> dum;
//     cout << (num/dum);
//     return 0;
// }

#include <cmath>

// int main()
//  {
//     double volume, radius, height;
//     const double PI = 3.14;
//     cout << "How tall is the tank? ";
//     cin >> height;
//     cout << "What is the radius of the tank? ";
//     cin >> radius;
//     volume = PI * pow(radius, 2.0) * height;
//     cout << "Volume of tank is: " << volume << endl;
//     return 0;

//  } 

// int main(){
//     int month;
//     int books;
//     double PerMonth;
//     cout << "Months: ";
//     cin >> month;
//     cout << "books: ";
//     cin >> books;
//     PerMonth = static_cast<double>(books) / month;
//     cout << "That is " << PerMonth << " books per month.\n";
//     return 0;
// }


// int main(){
//     int x = 127;
   
//     cout << "X: " << x << endl;

//     cout << static_cast<char>(x);
    
//     return 0;
// }


// int main()
//  {
//     char letter;
//     cout << "Enter Letter: ";
//     cin >> letter;
//     cout << static_cast<int>(letter);
//  return 0;
//  }



// int main()
//  {
//  int integer1, integer2;
//  double result;
//  integer1 = 19;
//  integer2 = 2;
//  result = integer1 / integer2;
//  cout << result << endl;
//  result = static_cast<double>(integer1) / integer2;
//  cout << result << endl;
//  result = static_cast<double>(integer1 / integer2);
//  cout << result << endl;
//  return 0;
//  } 

// int main(){
//     int unus, duo, tres;
//     unus = duo = tres = 5;
//     unus += 4;
//     duo *= 2;
//     tres -= 4;
//     unus /= 3;
//     // duo += tres;
//     cout << unus << endl;
//     cout << duo << endl;
//     cout << tres << endl;
//     return 0;
//  }
#include <iomanip>
// int main(){
//     double x=223, y=7, z;
//     z = x/y;
//     cout << setprecision(100) << z;


//     return 0;
//  }
#include <string>

int main(){
    string name;
    string city;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Hello, " << name << " . We got your address(" << city << "). Your parcel will arrive soon.";
    return 0;
}