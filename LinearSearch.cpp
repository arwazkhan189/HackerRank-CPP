#include<iostream>
using  namespace std;

// Linear Search
int linear_search(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
            return i; // if element found
        }
    }
    return -1; // if element not found
}

// main function
int main(){

    int arr[10] = {23,45,65,32,78,87,90,12,31,63};
    int key;
    cin>>key;

    int index = linear_search(arr, 10, key);

    if(index!=-1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else
    {
        cout<<key<<" is NOT Found!"<<endl;
    }


    return 0;
}