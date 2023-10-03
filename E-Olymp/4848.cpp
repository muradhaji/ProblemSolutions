//Link: https://www.e-olymp.com/az/problems/4848

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int* b){
    
    int t = *a;
    *a = *b;
    *b = t;
}

void quick_sort(int arr[], int left, int right){
    
    int pivot = arr[(left + right)/2];
    
    int i = left, j = right;
    
    while(i <= j){
        
        while(arr[i] < pivot)
            i++;
        
        while(arr[j] > pivot)
            j--;
        
        if(i <= j){
            
            swap(&arr[i], &arr[j]);
            
            i++;
            j--;
        }
    }
    
    if(left < j)
        quick_sort(arr, left, j);
    
    if(i < right)
        quick_sort(arr, i, right);
}

int main(int argc, char** argv) {
    
    int arr[100000];
    
    int n = 0, i;
    
    while(cin >> arr[n])
        n++;
    
    quick_sort(arr, 0, n-1);
    
    for(i = 0 ; i < n ; i++)
        cout << arr[i] << " ";
   
    return 0;
}
