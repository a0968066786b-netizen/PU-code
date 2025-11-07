#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>
using namespace std;

/*bool ugly(int num){
    int factor[3]={2,3,5};
    for(short i=0;i<3;i++){
        while( (num % factor[i])==0 )
            num/=factor[i];
    }
    return (num==1);
}


int ugly(int fac_pow[]){
    int factor[3]={2,3,5};
    double sum=0;
    for(short i=0;i<3;i++)
        sum+=pow(factor[i],fac_pow[i]);
    return int( sum );
}*/

int main(){
    int n;
    cin>>n;
    vector<int> ugly_numbers(n,0);
    ugly_numbers[0]=1;
    //int test_ugly=1;
    int factor[3]={2,3,5},index235[3]={},next_ugly[3]={2,3,5};//i2,i3,i5,u2,u3,u5
    for(int i=1;i<n;i++){
        int ugly=*min_element(next_ugly,next_ugly+3);
        //cout<<"next_ugly="<<next_ugly[0]<<' '<<next_ugly[1]<<' '<<next_ugly[2]<<endl ;
        ugly_numbers[i]= ugly;
        for(int j=0;j<3;j++){
            if(next_ugly[j]== ugly){
                next_ugly[j]=ugly_numbers[ ++index235[j]  ]*factor[j];
            }
        }

        /*if(n!=1)
            n=ugly(factor_pow);
        cout<<"n="<<n<<endl;
        int next_ugly[3];
        for(short i=0;i<3;i++){
            factor_pow[i]++;
            next_ugly[i]=ugly(factor_pow);
            factor_pow[i]--;
        }
        if(next_ugly[0]<next_ugly[1] && next_ugly[0]<next_ugly[2])
            factor_pow[0]++;
        else if(next_ugly[1]<next_ugly[0] && next_ugly[1]<next_ugly[2])
            factor_pow[1]++;
        else if(next_ugly[2]<next_ugly[0] && next_ugly[2]<next_ugly[1])
            factor_pow[2]++;
        */

        /*n=test_ugly;
        cout<<"n="<<n<<endl;
        do{
            int min_add=10,factor[3]={2-test_ugly%2,3-test_ugly%3,5-test_ugly%5};
            cout<<"factor="<<factor[0]<<' '<<factor[1]<<' '<<factor[2]<<endl;
            for(short i=0;i<3;i++ ){
                min_add=min(min_add,factor[i]);
            }
            test_ugly+=min_add;
        }while( !ugly(test_ugly) );*/

    }

    cout <<n<<' '<< ugly_numbers.back() << endl;
    return 0;
}
/*
一、程式範例描述：
已知 Ugly Number 的定義為：該數之質因數必須為 2, 3 或 5。
依照慣例，
1 也算是 Ugly Number。故前 11 個 Ugly Numbers
列舉如下：
1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15
請寫一個程式求出第 n 個 Ugly Number。


二、輸入說明：
任意整數 n，表示求第 n 個 Ugly Number


三、輸出說明：
輸出 n 的值與第 n 個 Ugly Number


四、輸入範例：
11
 20
1500

五、輸出範例：
11 15
20 36
1500 859963392
*/
