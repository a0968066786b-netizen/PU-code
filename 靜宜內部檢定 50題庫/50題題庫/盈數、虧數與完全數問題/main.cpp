#include <iostream>

using namespace std;

int main(){
    unsigned int n,sum=0;
    cin>>n;
    for(unsigned int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    //cout << "sum="<<sum<<' ';
    cout<<((sum==n)? "完全數\n":((sum<n)? "虧數\n":"盈數\n") );
    return 0;
}
