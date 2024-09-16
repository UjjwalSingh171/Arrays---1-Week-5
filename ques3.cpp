// Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

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

    int smallest = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }

    cout<<endl<<smallest;

    return 0;
    
}