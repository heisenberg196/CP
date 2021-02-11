#include <bits/stdc++.h>
using namespace std;
// Bubble SORT
// int main(){
//     long long int n;
//     cin>>n;
//     long long int a[n];
//     for (long long int i = 0; i < n; i++)
//         cin>>a[i];
//     for (long long int i = 0; i < n; i++)
//     {
//         for (long long int j = 0; j < n-i-1; j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 long long int t = a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=t;
//             }
//         }

//     }
//     for (long long int i = 0; i < n; i++)
//         cout<<a[i]<<endl;

// }

// Selection Sort

// int main(){
//     long long int n;
//     cin>>n;
//     long long int a[n];

//     for (long long int i = 0; i < n; i++)
//         cin>>a[i];

//     for (int i = 0; i < n; i++)
//     {
//         int minNum = a[i];
//         int minInd = i;
//         for (int j = i+1; j < n; j++)
//         {
//             if(a[j]<minNum)
//                 minInd = j;
//                 minNum = a[j];
//         }
//         long long int t = a[i];
//         a[i]=a[minInd];
//         a[minInd]=t;
//     }
//     for (long long int i = 0; i < n; i++)
//         cout<<a[i]<<endl;

// }

//Insertion Sort

// int main()
// {
//     long long int n;
//     cin >> n;
//     long long int a[n];

//     for (long long int i = 0; i < n; i++)
//         cin >> a[i];
//     int i, key, j;
//     for (int i = 1; i < n; i++)
//     {
//         key = a[i];
//         j = i - 1;

//         while (j >= 0 && a[j] > key)
//         {
//             a[j + 1] = a[j];
//             j = j - 1;
//         }
//         a[j + 1] = key;
//     }

// for (long long int i = 0; i < n; i++)
//     cout << a[i] << endl;
// }

// Linear sort (count sort)
// int main()
// {
//     long long int n;
//     cin >> n;
//     long long int a[n];
//     for (long long int i = 0; i < n; i++)
//         cin >> a[i];
//     int c[3]={0};
//     for (int  i = 0; i < n; i++)
//     {
//         c[a[i]]++;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         while(c[i]){
//             cout<<i;
//             c[i]--;
            
//         }
//     }
// }

// Count Sort
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
        cin >> a[i];
    int c[1000001]={0};
    for (int  i = 0; i < n; i++)
        c[a[i]]++;

    int out[n];
    for (int i = 1; i <= 1000000; i++)
        c[i]+=c[i-1];   
    for (int i = 0; i < n; i++)
    {
        out[c[a[i]]-1] = a[i];
        c[a[i]]--;
    }
          
    for (int i = 0; i < n; i++)
    {
        cout<<out[i];
    }
    

    


}