#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N;
    cin >> N;
    
    vector<int> input;
    
    int n;
    for(int i = 0 ; i < N; ++i)
        if(cin >> n)
            input.push_back(n);
    /*
    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
            if(input[j]>input[j+1]){
                int temp = input[j+1];
                input[j+1] = input[j];
                input[j] = temp;
            }
        }
    }*/

    std::sort (input.begin(), input.begin()+N); 

    for(int i=0;i<N;i++)
        cout << input[i] << " - ";
    
    int medianIndex = N/2;
    int median = input[medianIndex];

    cout << "median: " << median << endl;
    
    int count=0;
    for(int i=0;i<N;i++){
        if(input[i] == median)
            count++;
    }
    
    cout << "count: " << count << endl;;
    
    return 0;
}
