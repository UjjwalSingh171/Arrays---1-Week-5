// Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    if(n < 2) 
    { 
        // If there are less than 2 elements, no second largest element exists
        cout << "Array must have at least two elements.";
        return 0;
    }

    cout<<"Enter elements of array: ";
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    //Display array
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i] > smax && arr[i] < max) 
        {
            smax = arr[i];
        }
    }

    cout<<endl<<max<<" "<<smax;

    return 0;
}