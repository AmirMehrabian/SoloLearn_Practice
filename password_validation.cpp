/* Password validation
You're interviewing to join a security team. They want to see you build a password evaluator for your technical interview to validate the input. 
 
Task:  
Write a program that takes in a string as input and evaluates it as a valid password. The password is valid if it has at a minimum 2 numbers, 2 of the following special characters ('!', '@', '#', '$', '%', '&', '*'), and a length of at least 7 characters. 
If the password passes the check, output 'Strong', else output 'Weak'. 
 
Input Format: 
A string representing the password to evaluate. 
 
Output Format: 
A string that says 'Strong' if the input meets the requirements, or 'Weak', if not. 
 
Sample Input:  
Hello@$World19 
 
Sample Output:  
Strong
 */

#include <iostream>
#include <string>
using namespace std;


int main() {

string str;

cin >> str;


int len = str.length();

char specials[7]={'!', '@', '#', '$', '%', '&', '*'};
 
char numbers[10]={'0','1','2','3','4','5','6','7','8','9'};
 
int n_specials=0,n_numbr=0,n_char=0;

for (int i=0; i<len; i++){

    for (int j=0; j<7; j++){
   
        if (str[i]==specials[j]){
     
           n_specials +=1;
   
        }
     
    }
 
    for (int jj=0; jj<10; jj++){
    
        if (str[i]==numbers[jj]){
     
            n_numbr  +=1;
  
         }
     
    }
 
}

n_char = len-n_specials-n_numbr; 
   
if((n_char>=3)&&(n_specials>=2 )&&(n_numbr>=2 )){
    
    cout<<"Strong";
    
}else{

    cout<<"Weak";
    
}

    return 0;
}
