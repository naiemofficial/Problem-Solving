#include <iostream>
using namespace std;

int main(){
    int n, in, A, B, C, D, T;
    A = B = C = D = T = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(in == 1) A++;
        else if(in == 2) B++;
        else if(in == 3) C++;
        else if(in == 4) D++;
    }
    
    // Group 1 and 3, Make group while 3 and 1 available
    while(A > 0 && C > 0)
        A--, C--, T++;
    if(A) T += A/4, A -= (A/4)*4;
    if(C) T += C, C = 0;

    // Group 2 
    if(B) T += B/2, B -= (B/2)*2;
    while(A && B){ // Check group 2 and 1 combo
        A -= (A == 2) ? 2 : 1; // Combination (2+2) or (2+1)
        B--, T++;
    }
    if(B) B--, T++;
    

    // If still number of people 1 in a group available
    if(A) A--, T++;
    
    // Group 4
    T += D, D = 0;

    cout << T << endl;
}