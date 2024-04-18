#include <iostream>
#include <string>

using namespace std;


int main(){
   
   string str1, word, word1;
   getline(cin,str1);
   
   int len = str1.length();
   
   for (int i=0; i<len ; i++){
     
     
     if(str1[i] == ' '){
         
       
       word = word.substr(1)+word.substr(0,1)+"ay ";
       word1 +=word;
       word="";
       
     }else if(i==len-1){
         
     
     word +=str1[i];
     word = word.substr(1)+word.substr(0,1)+"ay";
     word1 +=word;
     word="";
     
     }else{
     word +=str1[i];
     }

     
   }
   cout<<word1;
  
    
    return 0;
    }
