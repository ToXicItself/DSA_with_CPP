#include <iostream>
using namespace std;

void pattern1(int n)
{
    int i = 0;
    while (i != n)
    {
        cout << "*****" << endl;
        i++;
    }
}

void pattern2()
{
    string j = "";
    for (int i = 0; i < 5; i++)
    {
        string f = j + "*";
        cout << f << endl;
        j = f;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     string j="";
//     for (int i = 1; i < 6; i++)
//     {

//         string l= to_string(i);
//         string f= j+l;
//         cout<<f<<endl;
//          j=f;
//      }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         int j = 0;
//         while (i>j)
//         {
//             cout<<i;
//             j++;
//         }
//         cout<<endl;

//     }
// }

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 9 - (2 * i); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 9 - (2 * i); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            int n = (i + j + 1) % 2;
            cout << n;
        }
        cout << endl;
    }
}

void pattern12()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }
        for (int j = 8; j > (i * 2); j--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13()
{
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            n = n + 1;
            cout << n << " ";
        }
        cout << endl;
    }
}

void pattern14()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            int n = 65;
            cout << char(n + j);
        }
        cout << endl;
    }
}

void pattern15()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << char(70 - j);
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(64 + i);
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // pattern5(n);
    // pattern6(n);
    // pattern7();
    // pattern8();
    // pattern9();
    // pattern10();
    // pattern11();
    // pattern12();
    // pattern13();
    //  pattern14();
    pattern15();
    // pattern16(n);
    return 0;
}
