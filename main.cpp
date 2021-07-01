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

