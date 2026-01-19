#include<iostream>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;

    for(int j=l;j<=h-1;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}
int main(){
    int arr[]={4,2,6,9,2};
    int n=5;
    quicksort(arr,0,n-1);
    cout<<"[ ";
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}
