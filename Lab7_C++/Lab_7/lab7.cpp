#include <iostream>
#include <cmath>
using namespace std;

double total_func_2=0;
double total_func_2_2=0;
bool started=true;
int temp_int_q4=0;

double func_2(int temp_n){
    if(temp_n < 1){
        return total_func_2;
    }
    else{
        total_func_2 += pow(-1, temp_n + 1) / temp_n;
        func_2(temp_n-1);
    }
}
// end of question 3

double func_2(){
    if(started){
        cout<<"Please enter a value "<<endl;
        cin>>temp_int_q4;
        started=false;
    }

    while(temp_int_q4>=1){
        total_func_2_2 += pow(-1, temp_int_q4 + 1) / temp_int_q4;
        temp_int_q4 -=1;
        func_2();
    }
    return total_func_2_2;

}
// end of question 4

int main() {
    cout<<func_2(7)<<endl;
    // end of question 3

    cout<<func_2();
    // end of question 4
}
