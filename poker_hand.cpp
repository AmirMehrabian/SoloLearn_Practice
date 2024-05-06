#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

char suits[4] = {'H','D','C','S'};
string values[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

template <typename T>
void print_arr(int size, T arr[]){
    for (int i=0; i<size; i++){
    cout<<arr[i]<<endl;
    }
}


bool is_straight(string arr[]){
    
    unordered_set<string> myvals = {arr[0],arr[1],arr[2],arr[3],arr[4]};
    
    for(int i=0; i<9;i++){
        unordered_set<string> vals={values[i], values[i+1], values[i+2], values[i+3], values[i+4]};
        
         if (myvals ==vals){
            return true;
            }
        
        }
        
    return false;
    
    }




/* num_repeat function can give us the sum of number of duplication. Based on
its output, we realize that if output is 1: pair, 2: two pair, 3:three of a kind, 6: four of a kind, 4:full house.*/
    
int num_repeat(string arr[]){
    int rep = 0;
    
    for (int i=0; i<4; i++){
        for (int j =i+1; j<5; j++){
            
            if (arr[i]==arr[j]){
                rep +=1;
                
                }
            
            }
    }
    
    return rep; 
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
            
        }else{
            
        word +=str[i];
        
        }
        
        
    
    }
    cout<<"---------------"<<endl;
    print_arr<string>(5,my_suit);
    cout<<"values"<<endl;
    
    print_arr<string>(5,my_val);
    
  cout<<num_repeat(my_val)<<endl;
  cout<<"Is it straight:"<<is_straight(my_val)<<endl;
    
    
    return 0;
    
}