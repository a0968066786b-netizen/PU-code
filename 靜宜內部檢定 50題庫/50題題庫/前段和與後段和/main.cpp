#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
    short n;
    cin>>n;
    vector<int>x(n,0);
    for(int &i:x)
        cin>>i;
    int sum=0;
    for(int i=0,first_sum=0;i<n;i++){
        first_sum+=x[i];
        for(int j=n-1,last_sum=0;j>=0;j--){
            last_sum+=x[j];
            if(first_sum==last_sum){
                //cout<<"first="<<first_sum<<" i="<<i<<" j="<<j<<endl;
                sum++;
                break;
            }
        }
    }
    cout<<sum<<endl;

    return 0;
}
