#include<iostream>
#include<algorithm>
using namespace std ;


int bubblesort(int arr[6]){
    int count = 0;
    int sortarray = sort(arr.begin() , arr.end());
    cout << sortarray << endl;
    for(int i = 0 ; i< 6 ; i++){
        if(arr[i] < arr[i+1]){
            swap(arr[i], arr[i+1]);
            count = count + 1;
        }
        else{
            continue;
        }
    }
    return count;
}


int main(){
    int arr[6] = {12,7,5,19,8,3};

    bubblesort(arr);

    cout << "no of comparison is " << bubblesort(arr) << endl;

    return 0;
    



}