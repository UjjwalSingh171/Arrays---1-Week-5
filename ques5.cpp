// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.
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
    
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<endl<<i+1<<" is missing";
        }
    }
    return 0;
    
}