// Calculate the product of all the elements in the given array.
#include<iostream>
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

    //Product of all elements
    int product=1;
    for(int i = 0 ; i<n ; i++)
    {
        product *= arr[i];
    }
    cout<<endl<<"Product of all elements: "<<product;

    return 0;
    
}