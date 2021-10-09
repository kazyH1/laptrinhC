#include <iostream>
using namespace std;

int main () {
    int a[1000]; int n,i,j;
    cout << "nhap n: "; cin >> n;
    if (cin.fail()) {cout << "\n" << "LỖI. Bạn cần phải nhập n là số. " << endl ;}
    else {for(i = 0; i < n; i++)
    {cout << "nhap a[" << i << "] = "; cin >> a[i];   }
        if (cin.fail()) {cout << "\n" << "LỖI. Bạn cần phải nhập a[] là số. " << endl ;}
        else { for(i=0; i< n-1; i++)
        for(j=i+1; j < n; j++)
            if (a[i] > a[j])
                swap (a[i], a[j]);
        cout << "thứ tự tăng dần là: ";
        for (int i = 0; i < n; i++)
            cout << a[i] <<" "  ;
        cout<<"\n";
    for(i=0; i< n-1; i++)
        for(j=i+1; j < n; j++)
            if (a[i] < a[j])
                swap (a[i], a[j]);
        cout << "thứ tự giảm dần là: ";
    for (int i = 0; i < n; i++)
        cout << a[i] <<" "  ;
    cout<<"\n";
        }}}
