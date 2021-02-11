    #include <bits/stdc++.h>
    using namespace std;

    int sum(int a[], int n){
        int s =0;
        for (int i = 0; i < n; i++)
        {
            s+=a[i];
        }
        return s;
        
    }

    bool isPossible(int a[], int n,int m, int val){
        int currSum=0, studcnt=0;
        for (int i = 0; i < n; i++)
        {
            if(currSum+a[i]>val){
                currSum = a[i];
                studcnt++;
            }
            else
            {
                currSum+=a[i];
            }
            if(studcnt>=m)
            return false;
            
            
        }
        
        return true;
    }

    int main(){
        int t;
        cin>>t;
        while(t--){
        int n, m;
        cin>>n>>m;
        int a[n];
        // cin>>a[0];
        for(int i=0; i<n; i++){
            // int t;
            // cin>>t;
            // a[i]+=t;
            cin>>a[i];
        }

        int finalAns = INT_MAX, MinInd;
        int l=a[n-1], r=sum(a, n);
        int mid;
        while (l<=r)
        {
            mid = (l+r)/2;
        
            if(isPossible(a, n, m, mid)){
                finalAns = min(finalAns, mid);
                r = mid-1;
            }
            else
            {
                l=mid+1;
            }
            
                
        }
        cout<<finalAns<<endl;
            
        
    }
    }