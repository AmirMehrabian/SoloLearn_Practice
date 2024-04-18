//Pig Latin:
/*You have two friends who are speaking Pig Latin to each other! Pig Latin is the same words in the same order except that you take the first letter of each word and put it on the end, then you add 'ay' to the end of that. ("road" = "oadray")  
 
Task 
Your task is to take a sentence in English and turn it into the same sentence in Pig Latin!  
 
Input Format  
A string of the sentence in English that you need to translate into Pig Latin. (no punctuation or capitalization) 
 
Output Format  
A string of the same sentence in Pig Latin. 
 
Sample Input  
"nevermind youve got them" 
 
Sample Output  
"evermindnay ouveyay otgay hemtay"*/

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
