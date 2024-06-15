#include <iostream>
using namespace std;

int main() {
    int n,i,pflag=1;
    cout<<"Enter a number:\n";
    cin>>n;
    for(i=2;i*i<=n;i++){
        if(n%i == 0){
            pflag=0;
            break;
        }
    }
    if(pflag == 0){
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }
    return 0;
}
