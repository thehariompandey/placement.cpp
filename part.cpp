// write the code to reverse the array 

#include<iostream>
using namespace std ;

void reverseArr(int arr[] , int n ){
    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(arr[start] , arr[end]);
        start++ ;
        end-- ;
    }

}

int main(){
    int arr[] = {2,3,4,5,6,7} ;

    reverseArr(arr , 6);

    cout << "reverse array is " ;
    for(int i = 0  ; i< 6 ; i++){
        cout << arr[i] << " " ;
    }


    return 0;
}