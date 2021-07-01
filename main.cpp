#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

//the top one wins all the test cases,
//but it hangs in clion and I am not sure why
 
    // i went to discord c++ help and they explain cin is meant for user input, 
    //cin is the way I was first taught to input values into a program
    //i don't understand stdin and stdout yet, (forgive me nyu instructors i know you tried)
    // but basically cin wasn't hanging so much as waiting for input
    // cin is NOT MEANT for hardcoded values I guess, just keyboard and file input
 //i c and p'd the whole q and a session below the main scope if you wanna see,
 //i am keeping it for my own understanding
    
 
//tandon ta's felt clion does
//stuff for users other compilers would (justifiably) force you to manage yourself,
//by simply giving you a specific error

//so a,b,c are initialized to 1,2,7
//cin bit shift operator int variable 3x
//i guess the compiler moves variables into
// memory,
//( memory you have not been forced to define yourself mind you, like with pointers and new)
// and when it jumps to cout
//the compiler adds them all up nice and neat
    int a =1;
    int b =2;
    int c = 7;
    cin>>a>>b>>c;
    cout<<a+b+c;
    /*
    int a = 1;
    int b = 2;
    int c = 7;

    cin >>a;
    cin >> b;
    cin >> c;
    cout<< a + b + c;
    */

    /*
    int a = 1;
    int b = 2;
    int c = 7;

    int expression = a + b + c;

cout << a + b + c;
*/
  /*  vector<int> vect_array= {1,2,7};
    int n = 0;

    for(int i =0; i<vect_array.size();i++){
        n += vect_array[i];

    }
    cout << n << endl;
    return 0;
*/

return 0;
}
/*
Jowohn
 — 
Today at 5:57 PM
how come you're initializing a, b, and c to specific values if you're gonna input values into them immediately after
tm_square_newb
 — 
Today at 6:00 PM
i figure they have to be initialized to some value, otherwise an error is thrown back and, to solve the problem I must  output 10 in the console
idk C++ well enough to get at your question Jowohn
killerbee13
 — 
Today at 6:00 PM
When you run it does it appear in a separate console or is it in the clion output view?
tm_square_newb
 — 
Today at 6:00 PM
latter
in the clion output view
killerbee13
 — 
Today at 6:01 PM
I'm not sure if you can type input into that
tm_square_newb
 — 
Today at 6:01 PM
wait, cin is meant specifically for user input and not hard-coded values?
am i thinking about this correctly?
because I am not typing 1,2,7 into the console here
killerbee13
 — 
Today at 6:02 PM
Yes, cin is for accepting input
tm_square_newb
 — 
Today at 6:02 PM
hm, ok
killerbee13
 — 
Today at 6:03 PM
Your program expects 3 integers with spaces/newlines between them
Jowohn
 — 
Today at 6:03 PM
on online compilers they often automatically input stuff into your program when you run it to see if it works
esp for like
problem set websites
tm_square_newb
 — 
Today at 6:04 PM
so the compiler sees 

cin

 and expects 1 2 7
not three variables holding 1 2 7
Jowohn
 — 
Today at 6:05 PM
it's gonna stop what it's doing until someone inputs numbers into the console and presses enter
and then put those numbers into a, b, c
tm_square_newb
 — 
Today at 6:05 PM
oohhhh
Jowohn
 — 
Today at 6:05 PM
and it's not technically the compiler that's stopping, but that's aside the point
killerbee13
 — 
Today at 6:06 PM
The values you set for a,b,c are not used after that line
tm_square_newb
 — 
Today at 6:06 PM
thanks folks, I sorta see now, it's expecting input
and its dropped a b c
killerbee13
 — 
Today at 6:06 PM
Unless you type like a letter in and it goes into a fail state
tm_square_newb
 — 
Today at 6:06 PM
hm wow

*/

