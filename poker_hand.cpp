/*
Poker Hand:
You are playing poker with your friends and need to evaluate your hand.
A hand consists of five cards and is ranked, from lowest to highest, in the following way:
High Card: Highest value card (from 2 to Ace).
One Pair: Two cards of the same value.
Two Pairs: Two different pairs.
Three of a Kind: Three cards of the same value.
Straight: All cards are consecutive values.
Flush: All cards of the same suit.
Full House: Three of a kind and a pair.
Four of a Kind: Four cards of the same value.
Straight Flush: All cards are consecutive values of same suit.
Royal Flush: 10, Jack, Queen, King, Ace, in same suit.

Task:
Output the rank of the given poker hand.

Input Format:
A string, representing five cards, each indicating the value and suite of the card, separated by spaces.
Possible card values are: 2 3 4 5 6 7 8 9 10 J Q K A
Suites:  H (Hearts), D (Diamonds), C (Clubs), S (Spades)
For example, JD indicates Jack of Diamonds.

Output Format:
A string, indicating the rank of the hand (in the format of the above description).

Sample Input:
JS 2H JC AC 2D

Sample Output:
Two Pairs */

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

char suits[4] = {'H','D','C','S'};
string values[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

// This is for printing the cards in the hand
template <typename T>
void print_arr(int size, T arr[]){

    for (int i=0; i<size; i++){

    cout<<arr[i]<<endl;

    }
}

// This check if the cards are straight
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

// This check if cards are royal
    bool is_royal(string arr[]){

    unordered_set<string> myvals = {arr[0],arr[1],arr[2],arr[3],arr[4]};


        unordered_set<string> royal_vals={"A","K", "Q", "J", "10"};

         if (myvals ==royal_vals){

            return true;

            }else{

         return false;

    }
    }


/* num_repeat function can give us the sum of the number of duplications. Based on
its output, we realize that if the output is 1: pair, 2: two pair, 3: three of a kind, 6: four of a kind, 4:full house.*/

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

// This will check if there is a flush
bool is_flush(string arr[]){

    if(num_repeat(arr)==10){

        return true;

    }else{

        return false;

    }

}


// This will use the previous functions to return the type of hand
string hand_type(string vals[], string suits[]){

string type;
int repeats = num_repeat(vals);
bool flush_flag = is_flush(suits);

if (is_straight(vals)){

    if (flush_flag){

        if(is_royal(vals)){

                type = "Royal Flush";

        }else{

        type = "Straight Flush";

        }

    }else{

    type = "Straight";

    }


}else if(flush_flag){

    type = "Flush";

}else if(repeats!=0){

    switch(repeats){

     case 1:

        type = "One Pair";
        break;

     case 2:

        type = "Two Pairs";
        break;

     case 3:

        type = "Three of a Kind";
        break;

     case 4:

        type = "Full House";
        break;

     case 6:

        type = "Four of a Kind";
        break;

    }


}else{

   type = "High Card";

}

return type;

}



int main(){

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

    cout<<"Hand type is: "<< hand_type(my_val, my_suit)<<endl;


    return 0;

}
