/* Credit Card Validator:
You need to verify if the given credit card number is valid. For that you need to use the Luhn test. 
 
Here is the Luhn formula: 
1. Reverse the number. 
2. Multiple every second digit by 2.  
3. Subtract 9 from all numbers higher than 9. 
4. Add all the digits together. 
5. Modulo 10 of that sum should be equal to 0.  
 
Task:  
Given a credit card number, validate that it is valid using the Luhn test. Also, all valid cards must have exactly 16 digits. 
 
Input Format: 
A string containing the credit card number you need to verify. 
 
Output Format: 
A string: 'valid' in case the input is a valid credit card number (passes the Luhn test and is 16 digits long), or 'not valid', if it's not. 
 
Sample Input: 
4091131560563988 
 
Sample Output: 
valid */

#include <iostream>
#include <string>
using namespace std;

int main() {

string str1,str2="";
getline(cin,str1);

int sum=0, len=str1.size();
string flag="not valid";
string digit;

for(int i=len-1;i>-1; i--){

    str2 +=str1[i];
    }

for(int i=0;i<len; i++){

    digit=str2[i];
    
    int num = stoi(digit);

    if(i%2==1){
       
       num *=2;
        
    }
    if(num>9){
    
      num -=9;
    }
    
    sum +=num;
}

if(sum%10==0 && len==16){

    flag="valid";
    
}

cout << flag<< endl;

return 0;
}
