/*
    We have to find the largest prime factor of 600851475143 ..you could just use seive and solve this .....based on the found array
    you can jsust start iterating from the back ..make sure to do the j starting from i^2 as the optimisation ..saves a ton of time 
    However this approach wont be the most efficient ...hence we must avoid it ..

    now we know ends with 3 which is odd ..so wont be divisivle by 2 ..or 5 ....it will be divisible by 3 becasue the sum of the digits are 
    divisible by 3..
    We simply use the trail division method ...but yeah optimize it to check by ..2 first ..then odd primes 
    coULD USE THE 6k+-1 rule ..but no need..for this problem





*/




#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;




long long Factorization(long long x){
    vector<int> v;
    while(x%2==0 && x>0){
        v.push_back(2);//could use a hash map for quicker retrieval ...But I just used my own prewritten code here ..and the number 
                        //clearly not divisible by 2 ..just wanted to make a generalised solution for this .
        x=x/2;
    }
    for(int i=3;i*i<=x;i=i+2){
        while(x%i==0){
            v.push_back(i);
            x=x/i;
        }
    }
    if(x>1)
        v.push_back(x);
    return v[v.size()-1];
}



int main(){
    long long x=600851475143;
    cout<<Factorization(x);
}
