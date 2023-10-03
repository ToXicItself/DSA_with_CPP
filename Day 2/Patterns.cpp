// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     while (i!=5)
//     {
//         cout<<"*****"<<endl;
//         i++;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     string j="";
//     for (int i = 0; i < 5; i++)
//     {
//         string f= j+"*";
//         cout<<f<<endl;
//          j=f;
//     }

// }

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

#include <iostream>
using namespace std;

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

void pattern7(int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<" ";
        }
        cout <<"*";
        cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // pattern5(n);
    // pattern6(n);
     pattern7(n);
}

