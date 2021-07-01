#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    

    
    vector<int> vect_array= {1,2,7};
    int n = 0;

    for(int i =0; i<vect_array.size();i++){
        n += vect_array[i];

    }
    cout << n << endl;
    
    /*int a = 1;
    int b = 2;
    int c = 7;

    int expression = a + b + c;

cout << a + b + c;*/
    
    return 0;


   }

