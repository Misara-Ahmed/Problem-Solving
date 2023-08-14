#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius) 
{
    vector<double> ans;
    ans.push_back(273.15 + celsius);
    ans.push_back( (1.80*celsius) + 32.00);
    return ans;
}

int main()
{
    double celsius;
    cin >> celsius;
    vector<double> ans = convertTemperature(celsius);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}