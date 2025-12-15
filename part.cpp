// write the code to reverse the array 

#include<iostream>
using namespace std ;

void reverseArr(int arr[] , int start , int end ){

    // base case 
    if(start >= end)
    return ;

    swap(arr[start] , arr[end]);
    reverseArr(arr , start + 1 , end - 1);
    

}

int main(){
    int arr[] = {2,3,4,5,6,7} ;
    int n = sizeof(arr)/ sizeof(arr[0]);

    reverseArr(arr , 0 , n-1);

    cout << "reverse array is " ;
    for(int i = 0  ; i< 6 ; i++){
        cout << arr[i] << " " ;
    }


    return 0;
}