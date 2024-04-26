#include <iostream>
#include <string>
using namespace std;

char suits[4] = {'H','D','C','S'};
string values[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

template <typename T>
void print_arr(int size, T arr[]){
    for (int i=0; i<size; i++){
    cout<<arr[i]<<endl;
    }
    }

int main(){
    //print_arr<char>(4,suits);
    //print_arr<string>(13,values);
    
    
    
    
    return 0;
    
}