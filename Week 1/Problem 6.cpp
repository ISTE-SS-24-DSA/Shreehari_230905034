#include <iostream>
using namespace std;

int largest(int arr[],int n)
{
    int l= arr[0],i;
    for (i=1;i<n;i++)
    {
        if (arr[i]>lg)
            l=arr[i];
    }
    return l;
}

int main()
{
    int n,i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i=0;i<n;i++)
        cin >> arr[i];
    cout << "The largest element of the array is : " << largest(arr,n);
    return 0;
}
