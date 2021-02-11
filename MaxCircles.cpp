#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, pair<int, int>>a, pair<int, pair<int, int>> b){
    return a.first < b.first;
}

int main(){
    int n;
    vector<pair<int, pair<int, int>>> vec;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c, r;
        // cout<<"Enter c, r ";
        cin>>c>>r;
        vec.push_back( make_pair(c, make_pair(c-r, c+r)));

    }
    int ct=0;
    // for (auto i : vec)
    // {
    //     cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    // }
    sort(vec.begin(), vec.end(), comp);
    vector<int> del;
    auto i = vec.begin();
    while(i!=vec.end())
    {
        if(i->second.first<(i-1)->second.second){
            // del.push_back(i);
            cout<<"Deleting "<<i->first<<endl;
            vec.erase(i);
            ct++;
        }
        else{
            i++;
        }
    }
    cout<<ct;
    // for (int i = 0; i < del.size(); i++)
    // {
    //     vec.erase(vec.begin()+del[i]);
    // }

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i].first.first;
    // }
    
    
    
}


// #include <algorithm> 
// #include <iostream> 
// using namespace std; 
  
// struct circle { 
//     int start, end; 
// }; 
  
// // Comparison function modified 
// // according to the end value 
// bool comp(circle a, circle b) 
// { 
//     if (a.end == b.end) 
//         return a.start < b.start; 
//     return a.end < b.end; 
// } 
  
// // Function to return the count 
// // of non intersecting circles 
// void CountCircles(int c[], int r[], int n) 
// { 
//     // structure with start and 
//     // end of diameter of circles 
//     circle diameter[n]; 
  
//     for (int i = 0; i < n; ++i) { 
//         diameter[i].start = c[i] - r[i]; 
  
//         diameter[i].end = c[i] + r[i]; 
//     } 
  
//     // sorting with smallest finish time first 
//     sort(diameter, diameter + n, comp); 
  
//     // count stores number of 
//     // circles to be removed 
//     int count = 0; 
  
//     // cur stores ending of first circle 
//     int cur = diameter[0].end; 
//     for (int i = 1; i < n; ++i) { 
  
//         // non intersecting circles 
//         if (diameter[i].start > cur) { 
//             cur = diameter[i].end; 
//         } 
  
//         // intersecting circles 
//         else
//             count++; 
//     } 
  
//     cout << count << "\n"; 
// } 

// int main(){
//     int n;
//     cin>>n;
//     int c[n], r[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>c[i]>>r[i];
//     }

//     CountCircles(c, r, n);
    
// }