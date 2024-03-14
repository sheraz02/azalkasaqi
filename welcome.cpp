# include <iostream>
using namespace std;
// int main(){
//     string name;
//     int age;
//     cout << "Your Name? ";
//     cin >> name;
//     cout << "Age? ";
//     cin >> age;
//     cout << "Hello, " << name << " You are " << age << " old.";\

//     return 0;
// }


int main(){
    double  RegularWages,
            BasePayRate = 10,
            RegularHours = 5,
            OverTimeWages,
            OverTimePayRate = 12,
            OverTimeHours = 10,
            TotalWages;
        
    
    RegularWages = BasePayRate * RegularHours;

    OverTimeWages = OverTimePayRate * OverTimeHours;

    TotalWages = RegularWages + OverTimeWages;

    cout << "Total Earning this week..! " << TotalWages << endl;

    return 0;

}