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
    string str, word;
    
    string my_val[5], my_suit[5];
    getline(cin,str);
    
    int len = str.length(), cntr = 0, l_w;
    
    for (int i =0; i<len; i++){
        if(str[i] == ' '){
         
        l_w = word.length(); 
        my_val[cntr] = word.substr(0,l_w-1) ;
        my_suit[cntr] =word.substr(l_w-1,1) ;
        cntr += 1;
        word = "";
        
        }else if(i == len-1){
            
        word +=str[i];
        l_w = word.length(); 
        my_val[cntr] = word.substr(0,l_w-1) ;
        my_suit[cntr] =word.substr(l_w-1,1) ;
        cntr += 1;
        word = "";
        
        
        word = "";
            
        }else{
            
        word +=str[i];
        
        }
        
        
    
    }
    cout<<"---------------"<<endl;
    print_arr<string>(5,my_suit);
    print_arr<string>(5,my_val);
    
    return 0;
    
}