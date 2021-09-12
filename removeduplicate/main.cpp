#include <iostream>

using namespace std;

class ahmad
{
    public:
        int removeDuplicates(int *arr, int n);
};

int ahmad:: removeDuplicates(int *arr, int n)
{
    if (n==0 || n==1)
        return n;
    int temp[n];
    int j = 0;
    for (int i=0; i<n-1; i++)
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
    temp[j++] = arr[n-1];
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
    return j;
}

int main()
{
    ahmad ab1;
    int arr[5]={1,2,2,3,4};
    int sizez=sizeof(arr)/sizeof(arr[0]);
    int n=0;
    n = ab1.removeDuplicates(arr,sizez);

    for (int i=0; i<n; i++)
       cout << arr[i] << " ";

    return 0;

}
