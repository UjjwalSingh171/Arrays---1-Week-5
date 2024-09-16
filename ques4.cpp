// Given an array, predict if the array contains duplicates or not.
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

    
    bool flag = false;
    for(int i=0 ; i<n ; i++)
    {
        int x=arr[i];
        for(int j = i+1 ; j<n ; j++)
        {
            if(x==arr[j])
            {
                flag=true;
                break;
            }
        }

    }

    if(flag==true)
    {
        cout<<endl<<"Duplicate found sirr";
    }
    return 0;
    
}