/*4_10.程式能力檢定題庫-題目難度 [*]-英文字母大小寫更換(100.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    string sum,line;
    while(getline(cin,line) ){
        sum+=line+'\n';
    }
    for(auto i=sum.find('.'); i!=string::npos&&i<sum.size()-2 ;
    i=sum.find('.',i+1)  ){
        do{
            i++;
        }while(! isalpha(sum[i]) );
        sum[i]=toupper(sum[i]);
    }
    cout<<sum;
   return 0;
}
/*
一、程式範例描述：
輸入一段以英文字母的組成的字串，並且將字串中開頭與所有位於句點之後的第一個非大寫的英文字母改成大寫。


二、輸入說明：
輸入一段英文字母的字串，最少有一句點後第一個字母為英文小寫字母。


三、輸出說明：
輸出開頭與所有句點後第一個字母皆為大寫的字串。


四、輸入範例：
“This is a book. that is a pen. they are students.”
“this is a iphone5s. it is a nice phone. I will buy it.”


五、輸出範例：
“This is a book. That is a pen. They are students.”
“This is a iphone5s. It is a nice phone. I will buy it.”
*/
