#include <iostream>

using namespace std;

void draw_1(int n)
{
    int mid = (n-1)/2;
    int num = 1;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j <= (mid - (abs(mid - i))) || j >= (mid - (abs(mid - i))) + (n - (mid - (abs(mid - i)))*2) - 1)
            {
                if(num < 10)
                {
                    cout << num << "    ";            
                }
                else
                {
                    cout << num << "   ";
                }
                num += 1;
            }
            else
            {
                cout << "     ";
            }
        }
        cout << endl;
    }
}

void draw_2(int n)
{
    int mid = n/2;
    int num = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < mid + (mid - abs(mid - i)) + 1; j++)
        {
            if(j > abs(mid - i) - 1)
            {
                if(num < 10)
                {
                    cout << num << "   ";
                }
                else
                {
                    cout << num << "  ";
                }
                num += 1;
            }
            else
            {
                cout << "    ";
            }
        }
        cout << endl;
    }
}
int main()
{
    cout << endl << endl << "B1: " << endl << endl;
    draw_1(12);
    cout << endl << endl << "B2: " << endl << endl;
    draw_2(11);
    return 0;
}