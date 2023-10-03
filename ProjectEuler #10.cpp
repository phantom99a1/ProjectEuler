#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
typedef long ll;
vector<ll> SieveOfEratosthenes() 
{ 
    vector<ll>primes;
    bool prime[MAX]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=MAX; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*p; i<=MAX; i += p) 
                prime[i] = false; 
        } 
    } 
    
    for (ll p=2; p<=MAX; p++) 
       if (prime[p]) {
          primes.push_back(p);
       } 
    return primes;
} 

int main() {
    int t; cin>>t;
    vector<ll>primes=SieveOfEratosthenes();
    while(t--){
        ll n; cin>>n;
        ll sum=0;
        for(ll i=0;primes[i]<=n;i++){
            sum+=primes[i];
        }
        cout<<sum<<endl;
    }   
    return 0;
}
