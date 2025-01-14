#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        return {kelvin, fahrenheit};
    }
};

int main()
{
    Solution solution;
    double celsius;
    cin >> celsius;

    vector<double> result = solution.convertTemperature(celsius);

    cout << fixed << setprecision(5);
    cout << result[0] << ", " << result[1] << endl;

    return 0;
}
