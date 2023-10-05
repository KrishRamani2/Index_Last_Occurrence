#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int x)
{
	for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x) return i;
    }
    return -1;
}
int main() {
    int arr[] = {5, 10, 10, 10, 20,20,10,20}, n = 8;
	int x = 10;
	cout<<firstOcc(arr, n, x);
	return 0;
}