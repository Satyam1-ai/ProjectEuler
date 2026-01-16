/*
SECOND QUESTION OF THE EULER PROBLEM SET ..FINDING ...THE EVEN SUMNS 
SO BASICALLY ..in a sequence till some number ...if we have evens we sum them and get the result ..
Look for the patterns here...we have .....out fibbonachi sequence as ...0,1,1,2,3,5,8,13....We sohuld start from 1 according to the queation 
constrainsts ..
so ..1,2,3,5,8,13,21,34,55,89...
the 2,5,8,11 ...terms are all even ...so the even numbers are found in spaces of 3 ....now to find some pattern that links them we simply do

we just solve the fibonacci interms of ...their even terms ..and rearrage while expanding the problem ..
This involves .......En =4*En-1 + En-2
Use Long Long or Modulo ...becasue its my test code ..i am not doing it ..
*/




#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


int Even_Fib(int n){
    if(n<2)
        return 0;
    if(n<8)
        return 2;
    int e_one=2;
    int e_two=8;
    int e_three=INT_MIN;
    int sum=e_one+e_two;
    while(e_three<n){
        e_three=4*e_two+e_one;
        if(e_three>n){
            break;
        }
        sum+=e_three;
        e_one=e_two;
        e_two=e_three;
    }
    return sum;

}





int main(){
    cout<<Even_Fib(1000);




}