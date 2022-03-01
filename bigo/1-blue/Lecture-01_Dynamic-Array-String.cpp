#include <iostream>
using namespace std;

// int main() {
//     cout << "create dynamic array of string" << ";";
//     return 0;
// }

#include <string>
#include <vector>

int main()
{
    int n;
    cout << "=> input size:" << endl;
    cin >> n;
    cout << "dynamic array of string created, size: " << n << endl;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "value " << i << ": " << a[i] << endl;
        cin >> a[i];
    }
    cout << "-------------- print all values -----------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i << "], value: " << a[i] << endl;
    }
    return 0;
}