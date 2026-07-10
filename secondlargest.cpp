#include<iostream>
#include<vector>
using namespace std;

int secondlargest(vector<int>num){
    int largest = -1;
    int secondlargest = -1;
    if(num.size() < 2){
        return -1;
    }

    for(int i = 0; i< num.size() ; i++){
        if(num[i] > largest){
            secondlargest = largest;
            largest = num[i];
        }

        if(num[i] > secondlargest && num[i] < largest){
            secondlargest = num[i];
        }
    }
    return secondlargest;
};

int main(){
    vector<int>num = {12,35,43,29,39,29};
    int ans = secondlargest(num);

    if(ans == -1){
        cout << "not found " << endl;
    }else{
        cout << "second largest element is " << ans << endl;
    }

    return 0;
}