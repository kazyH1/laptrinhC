#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    bool con;
    do
    {
        int a,b,c;
        float t;
        cout << "phuong trinh co dang ax^2+bx+c=0 " << "\n";
        cout << "nhap a "; cin >> a;
        cout << "nhap b "; cin >> b;
        cout << "nhap c "; cin >> c;
        if (a==0)
        {
            if(b==0)
            {
                cout << "phuong trinh vo so nghiem"<< endl;
            }
            else if (c==0)
            {
                cout << "phuong trinh co nghiem x = 0" << endl;
            }
            else
            {
                cout << "phuong trinh co mot nghiem x = " << -c/b << endl;
            }
        }
        else
        {
            t=b*b-4*a*c;
            if (t>0)
            {
                cout << "phuong trinh co nghiem x1 = " << (-b+ sqrt(t))/(a*2) << "\n";
                cout << "phuong trinh co nghiem x2 = " << (-b- sqrt(t))/(a*2) << endl;
            }
            else if (t==0)
            {
                cout << "phuong trinh co nghiem kep x1 = x2 = " << (-b)/(2*a) << endl;
            }
            else
            {
                cout << "phuong trinh vo nghiem" << endl;
            }
        }
        cout << "do you want continue?(1-yes, 0-no): ";
        cin >>con;
    }
    while(con);
}
