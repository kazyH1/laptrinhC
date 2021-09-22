#include <iostream>

using namespace std;

int main()
{
    bool con;
    	do
            {
                char p;
                float a, b;
                cin >> a >> p >> b;
                switch (p)
                {
                    case '+':
                    {
                    cout << a + b;
                    break;
                    }
                    case '-':
                    {
                    cout << a - b;
                    break;
                    }
                    case '*':
                    {
                    cout << a*b;
                    break;
                    }
                    case '/':
                    {
                    cout << a/b;
                    break;
                    }
                }
                // so sanh hai so
                if (a > b)
                {
                    cout << "\n" << "số lớn nhất trong hai số là  " << a;
                    cout << "\n" << "số nhỏ nhất trong hai số là  " << b;
                }
                else if (a < b)
                {
                    cout << "\n" << "số lớn nhất trong hai số là  " << b;
                    cout << "\n" << "số nhỏ nhất trong hai số là  " << a;
                }
                else
                {
                    cout << "\n" << "hai số bằng nhau";
                }
                cout << "\n" << "bạn có muốn tiếp tục? (1-có; 2-không): ";
                cin >> con;
            }while (con);
}
