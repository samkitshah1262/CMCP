#include <iostream>
#include <sstream>
#include <string>
 
using namespace std;
 
string SumDigits(string n);
 
int main()
{
    string n;
    cin >> n;
 
    int count = 0;
 
    while (n.length() > 1) {
        n = SumDigits(n);
        count++;
    }
    
    cout << count << endl;
 
    return 0;
}
 
string SumDigits(string n)
{
    int result = 0;
    for (size_t i = 0; i < n.length(); i++)
        result += (int) (n[i] - '0');
 
    stringstream ss;
    ss << result;
    
    return ss.str();
}