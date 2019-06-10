//Come estas?
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


#define PI 3.14159265359


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    double n,r;
    cin >> n >> r;

    double angle = 180/n;
    
    //Merhaba
    cout << (r*sin(angle*PI/180))/(1-sin(angle*PI/180)) << endl;
   
    return 0;
}
