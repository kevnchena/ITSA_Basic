#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a[10];
    double max = 0.0, min = 0.0;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] > max)max = a[i];
        if (a[i] < min)min = a[i];

    }
    cout << "maximun:" << fixed << setprecision(2) << max << endl;
    cout << "maximun:" << fixed << setprecision(2) << min << endl;
    return 0;
}