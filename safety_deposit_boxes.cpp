/* Safety deposit boxes:
You are robbing a bank, but you’re not taking everything. You are looking for a specific item in the safety deposit boxes and you are going to drill into each one in order to find your item. Once you find your item you can make your escape, but how long will it take you to get to that item?

Task
Determine the amount of time it will take you to find the item you are looking for if it takes you 5 minutes to drill into each box.

Input Format 
A string that represent the items in each box that will be drilled in order (items are separated by a comma), and secondly, a string of which item you are looking for.

Output Format 
An integer of the amount of time it will take for you to find your item.

Sample Input
'gold,diamonds,documents,Declaration of Independence,keys'
'Declaration of Independence'

Sample Output 
20
*/
#include <iostream>
#include <string>
using namespace std;

int main() {

string str1, str2, item;

getline(cin, str1);
getline(cin, str2);

int len=str1.length(), num_item=0, time;


for (int i=0; i<len; i++){

     if(str1[i] == ','|i==len-1){
        
        if(i==len-1){
        
            item += str1[i];
            
        }
     
        num_item += 1;
        
        if(item == str2){
        
            time = num_item*5;
        }
        
        item = "";    
         
     }else{
     
     item += str1[i];
     
     }

}

cout<<time<<endl;

 return 0;
}
