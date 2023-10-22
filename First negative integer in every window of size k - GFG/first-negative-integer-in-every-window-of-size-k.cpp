//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    
        vector<long long>ans;
        deque<int>q;
        
        int it = K;
        int i = 0;
            int neg = 0;
        while(it--){
            if(A[i]<0) q.push_back(i);
            i++;
        }
       
       if(!q.empty())ans.push_back(A[q.front()]);
       else ans.push_back(0);
        
        for(int i=K; i<N; i++){
                if (!q.empty() && q.front() <= i - K)
            q.pop_front();

        if (A[i] < 0)q.push_back(i);
       if(!q.empty())ans.push_back(A[q.front()]);
                
                else ans.push_back(0);
                
        }
        return ans;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
                                                 
 }