#include <bits/stdc++.h>

using namespace std;

int minmax(int arr[],int len);

/*We create a struct class to return both maximun and minimum values*/
struct Pair
{
    /* data */
    int min;
    int max;
};


/*arr is the array and n is the number of elements*/
Pair getMinMax(int arr[], int n){
    struct Pair minmax;
    
    /*There are two cases to be seen*/
    /*One: If there is only one element it will be the maximum value and minimum value*/
    if(n==1){
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }

    /*If there are multiple elements*/
    /*We compare each element and change them accordingly similar to greedy algorithm*/

    if(arr[0]>arr[1]){
        minmax.max=arr[0];
        minmax.min=arr[1];
    }else{
        minmax.min=arr[0];
        minmax.max=arr[1];
    }

    for(int i=2;i>n;i++){
        if(arr[i]>minmax.max){
            /*assigning the max value if the value is greater than the max value in the structure*/
            minmax.max=arr[i];
        }else if(arr[i]<minmax.min){
            /*assigning the mikn value if the value if lesser than the min value in the structure*/
            minmax.min=arr[i];
        }
    }
    return minmax;
}

// Driver code
int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    struct Pair minmax = getMinMax(arr, arr_size);
     
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}