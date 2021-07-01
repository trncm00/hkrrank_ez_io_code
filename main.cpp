#include <iostream>
using namespace std;


int main() {

    int num;
    int countDigits;
    int sumDigits;
    int currDigit;

    cout<<"Please enter positive integer."<<endl;
    cin>>num;

    sumDigits = 0;//the accumulator he mentions in the lecture, adds up the digits
    countDigits = 0;//takes the sequence, counts the number

    //to figure out which boolean condition needs to be evaluated here, we trace the execution
    while(num>0){
        currDigit = num % 10;//presents the digit to the furthest right, this is the digit we are iterating over!!
        countDigits++;//increments, as a result of the previous act

        sumDigits += currDigit;//puts the mod value in the sum, to be added up
        num = num/10;//this removes the final digit from num,
        // iterating with the while loop mods num, that triggers an incrementation and then it is place in the sumDigits variable
        //then the input is divided by 10, splitting that number from the one that was modded, so that the next iteration has a
        //new number to work with

    }

    cout<<num<<" has "<<countDigits<<" Digits ";
    cout<<" and their sum is "<<sumDigits<<endl;
    return 0;

//iterate over digits, each time we count a digit and add that to
//some accumulator that holds the total sum
//
//twp variables, one variable takes the count of the number, whether its first, second, third, etc
//and the next one takes the value that variable holds and these values will be added up, summed
// counting then adding it
//how to iterate over the digits, we can't access each digit separately
//mathematical property of numbers that splits the number furthest to the right, away from the places to its left
//
//if we take 375 divide it by 10, we get 37 and the remainder is five
//div 375 and mod 375 (375 /10 = 37R5)
//375 mod 10 = 5 and 375 div 10 = 37
//
//works for any length of number
//2375 mod 10 = 5
//2375 div 10 = 237
//AnAn-1...A1A0 mod 10 = A0
// taking an n plus one digit number An to A0 mod ten would isolate the ones digit 10 and
// diving it by ten would isolate the rest of the digits
//splitting the ones digit from the rest of the digits
// we
}
