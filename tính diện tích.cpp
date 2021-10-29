#include<iostream>
#define pi 3.14
using namespace std;
class fn
{
      public:
        void dientich(int);  //hinh tron
        void dientich(int,int);  //hinh chu nhat
        void dientich(float ,int,int);  //hinh tam giac
};
 
void fn::dientich(int a)
{
      cout<<"Dien tich hinh tron la: "<<pi*a*a<<"\n";
}
void fn::dientich(int a,int b)
{
      cout<<"Dien tich hinh chu nhat la: "<<a*b<<"\n";
}
void fn::dientich(float t,int a,int b)
{
      cout<<"Dien tich hinh tam giac la: "<<t*a*b<<"\n";
}
 
int main()
{
     int ch;
     int a,b,r;
     
     fn obj;
     cout<<"\n\t\tNap chong ham";
     cout<<"\n1. Dien tich hinh tron" "\n2. Dien tich hinh chu nhat" "\n3. Dien tich hinh tam giac" "\n4. Thoat";
     cout<<"\nNhap lua chon cua ban: ";
     cin>>ch;
 
     switch(ch)
     {
              case 1:
                cout<<"Nhap ban kinh duong tron: ";
                cin>>r;
                obj.dientich(r);
                break;
              case 2:
                cout<<"Nhap hai canh cua hinh chu nhat: ";
                cin>>a>>b;
                obj.dientich(a,b);
                break;
              case 3:
                cout<<"Nhap cac canh cua hinh tam giac: ";
                cin>>a>>b;
                obj.dientich(0.5,a,b);
                break;
              case 4:
                exit(0);
     }
return 0;
}
