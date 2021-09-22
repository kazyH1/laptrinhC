#include <iostream>
using namespace std;
int main()
{
    bool con;
    do
    {
        float a,b;
        cout << "nhap a ";
        cin >> a ;
        cout << "nhap b ";
        cin >> b ;
        cout << "tong cua " << a << " va " << b << " la " << a+b << "\n";
        cout << "hieu cua " << a << " va " << b << " la " << a-b << "\n";
        cout << "tich cua " << a << " va " << b << " la " << a*b << "\n";
        cout << "thuong cua " << a << " va " << b << " la " << a/b << endl;
        //
        cout << "ban co muon tiep tuc? (1-co 0-khong): ";
        cin >> con;
    }while (con);
}
