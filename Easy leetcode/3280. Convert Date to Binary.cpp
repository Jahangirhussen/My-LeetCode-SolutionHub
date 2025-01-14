#include <iostream>
#include <string>
using namespace std;
string toBinary(int num)
{
    string binary = "";
    if (num == 0) return "0";
    while (num > 0)
    {
        binary =binary + to_string(num % 2) ;
        num /= 2;
    }
    return binary;
}

string convertDateToBinary(const string& date)
{
    int year = stoi(date.substr(0, 4));//0 theke 4 ta  nibo mane index 0,1,2,3
    int month = stoi(date.substr(5, 2));//5 theke 2 ta nibo index  5,6
    int day = stoi(date.substr(8, 2));// 7 theke 2 ta nibo 7,8

    string yearBinary = toBinary(year);
    string monthBinary = toBinary(month);
    string dayBinary = toBinary(day);

    return yearBinary + "-" + monthBinary + "-" + dayBinary;
}

int main()
{
    string date;

    cout << "Enter a date in yyyy-mm-dd format: ";
    cin >> date;

    cout << "Binary representation: " << convertDateToBinary(date) << endl;

    return 0;
}
