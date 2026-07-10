#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>&arr){
    int left = 0;
    int right = arr.size() -1;

    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    return arr;
}

int main(){
    vector<int> arr = {12 , 13, 16};
    reverse(arr);

    cout << "reverse number is ";

    for(int num : arr){
        cout << num  << " ";
    }
    cout << endl;

    return 0;
}