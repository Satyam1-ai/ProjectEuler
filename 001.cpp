/*
First Problem of Euler Project ..here we are given ..multiples of 3 and 5 ..We have to find the summation  till ...1000 if they are multiples 
So yeah ...you could loop around till 1000 with intervals of 3 and intervals of 5 ...Add them ...and then subtract the LCM from these 
sums becasue LCM is actually all the common ...numbers between the two ...within a range ..
Imagine a runner A ..and a runner B ..Both of them start at a point ...0 ..one is 3 kms/hr while the other runs at 5 kms/hr ..
they both hit the 15 km checkpoint ..5 quicker than 3 ofcourse ..So yeah it becomes a common point ..now all teh multiples of ....
15 have to be considered till 1000 ..

Now instead of using loops we can simply use ..the AP sum formula 
Sn=(n/2)*(2*(1)+(n-1)*d) ...d will be the multiples 5 and 3 ..and ...a is starting point of natural numbers ..
n will be the number of mutiples of 3 and 5 lets assume mulitples as k
So m=[n-1]/k number of terms ...
*/


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;




int calculateSum(int k){
    int m=999/k;
    return (k*(m*(m+1)/2));
}




int main(){
    int x=calculateSum(3);
    int y=calculateSum(5);
    int z=calculateSum(15);   //COULD CALC LCM VIA A FUNCTION ...BY CHECKING PRIME FACTORIZATION AND MULTIPLYING THE HGHST COMMON

    cout<<x+y-z;


}



