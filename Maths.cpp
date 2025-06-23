#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1)
        return false;

    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
// Sieve of Eratosthenes
int countPrimes(int n){
    int count = 0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    return count;
}
// Euclid's algorithm
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    return 0;
}