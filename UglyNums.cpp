// #include <bits/stdc++.h>
// using namespace std;

// /*This function divides a by greatest divisible
//   power of b*/
// int maxDivide(int a, int b)
// {
//   while (a%b == 0)
//    a = a/b;
//   return a;
// }

// /* Function to check if a number is ugly or not */
// int isUgly(int no)
// {
//   no = maxDivide(no, 2);
//   no = maxDivide(no, 3);
//   no = maxDivide(no, 5);

//   return (no == 1)? 1 : 0;
// }

// /* Function to get the nth ugly number*/
// int getNthUglyNo(int n)
// {
//   int i = 1;
//   int count = 1;   /* ugly number count */

//   /*Check for all integers untill ugly count
//     becomes n*/
//   while (n > count)
//   {
//     i++;
//     if (isUgly(i))
//       count++;
//   }
//   return i;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     // set<int> a;
//     // int a[10000];
//     vector<int>  finalset;
//     int m[] = {2, 3, 5};
//     finalset.push_back(1);
//     for(int i=2; i<10000; i++){
//         if(getNthUglyNo(i))
//             finalset.push_back(i);

//     }

//     // for(auto it=a.begin(); it!=a.end(); it++){
//     //     for (auto it2 = a.begin(); it2 != a.end(); it2++)
//     //     {
//     //         x=(*it)*(*it2);
//     //         if(x>10000){
//     //             it=a.end();
//     //             it2=a.end();
//     //             break;
//     //         }
//     //         else{
//     //             cout<<x;
//     //             a.insert(x);
//     //         }

//     //     }

//     // }

//     while (t--)
//     {
//         int n;
//         cout << "Enter n ";
//         cin >> n;
//         cout << finalset[n-1] << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
long long int ugly(long long int n)
{
    long long int result[n];
    result[0] = 1;
    long long int i2 = 0, i3 = 0, i5 = 0;
    long long int uglyi2 = 2;
    long long int uglyi3 = 3;
    long long int uglyi5 = 5;
    long long int res = 1;
    for (int i = 1; i < n; i++)
    {
        res = min(uglyi2, min(uglyi3, uglyi5));
        result[i] = res;
        if (res == uglyi2)
        {
            i2++;
            uglyi2 = result[i2] * 2;
        }
        if (res == uglyi3)
        {
            i3++;
            uglyi3 = result[i3] * 3;
        }
        if (res == uglyi5)
        {
            i5++;
            uglyi5 = result[i5] * 5;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << ugly(n) << endl;
    }
}