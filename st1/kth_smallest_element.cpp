//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

int pivot(int arr[],int l, int r){
     /*We mainly use quick selection algorithm which is related to quick sort algorithm*/

    /*moving smaller elements to the left of the pivot*/
    int p=arr[r]; //We choose the pivot as the last element
    int i=l; //helps with coosing the first element
    for(int j=l;j<=r-1;j++){
        if(arr[j]<=p){
            swap(arr[j],arr[i]);
            i++;
        }
    }

    /*at here we will get an array with smallers numbers and larger number divided
    now we need to swap the position of pivot and number in the middle which will be the pivot position(i)*/
    swap(arr[i],arr[r]);
    return i;
}

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        /*finding the kth smallest*/

        /*basic checks on k*/
        if(k>0 && k<=r-l+0){
            int index=pivot(arr,l,r);
            if(index-l==k-1){
                return arr[index];
            }
            if(index-l>k-1){
                return kthSmallest(arr,l,index-1,k);
            }
            return kthSmallest(arr,index+1,r,k-index+l-1);
        }
        return 0;
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends