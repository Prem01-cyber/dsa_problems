//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 

        /*We iterate through the array find the number of repetetions and update the respective values and regenerate the array*/
        int zeros = 0;
        int ones = 0;
        int twos = 0;

        /*Iterating through the array and incrementing the values*/
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zeros++;
            }
            if(a[i]==1){
                ones++;
            }
            if(a[i]==2){
                twos++;
            }
        }

        /*generating a new array with desired result*/
        for(int i=0;i<zeros;i++){
            a[i]=0;
        }
        for(int i=zeros;i<(zeros+ones);i++){
            a[i]=1;
        }
        for(int i=(zeros+ones);i<(zeros+ones+twos);i++){
            a[i]=2;
        }
    }
    
};



//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;
    }
    return 0;
}