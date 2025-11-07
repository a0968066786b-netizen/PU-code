/*4_20.程式能力檢定題庫-題目難度 [**]-繪製長條圖(100.0)*/
//#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <set>
using namespace std;
int main() {
    unsigned short score[20];
    short grade[5]={};
    //score is input,grade[0]=grade A,[1] is grade B....
    for(unsigned short &st:score){
        cin>>st;
        if(st>=90&&st<=100)
            grade[0]++;
        else if(st>=80)
            grade[1]++;
        else if(st>=70)
            grade[2]++;
        else if(st>=60)
            grade[3]++;
        else
            grade[4]++;
    }
    short max_grade=-1;
    for(short st:grade)
        max_grade=max(max_grade,st);
    /*cout<<"grade="<<grade[4]<<' '<<grade[3]<<' '
    <<grade[2]<<' '<<grade[1]<<' '<<grade[0]<<endl;*/
    set<short> grape;
    for(short i=max_grade;i>0;i--){
        for(short j=4;j>=0;j--){
            if(grade[j]>=i){
                grape.insert(4-j);//4->0,3->1,2->2,1->3,0->4
                //index=4-j
            }
        }
        string line( (*grape.rbegin() )*2+1,' ');
        for(short index : grape){
            line[ index*2 ]='*';
        }
        cout<<line<<endl;
    }
    cout<<"- - - - -\nE D C B A\n";
    return 0;
}
/*
一、 程式範例描述：
輸入 20 筆介於 0 至 100 的整數。若輸入值介於 90 到 100，則將其歸類為"Grade A"；若
輸入值介於 80 到 89，則歸類為"Grade B"；若輸入值介於 70 到 79，則歸類為"Grade C"；
若輸入值介於 60 到 69，則歸類為"Grade D"；若輸入值介於 0 到 59，則歸類為"Grade E"。
統計出每一類的數量，並以星號畫出直長條圖。


二、 輸入說明：
整數 N1、N2、N3、…、N20，0≦ N1，N2，N3，…，N20 ≦100。


三、 輸出說明：
畫出以星號構成之直長條圖，以 E、D、C、B、A 為 x 軸數值，每一個長條圖以空格隔開。


四、 輸入範例：

1	78 66 32 69 78 88 92 95 76 66 89 73 87 44 52 65 62 71 65 82↵
2	77 69 62 79 78 88 98 93 86 66 10 53 32 10 49 59 22 99 39 19↵
3	18 66 22 68 72 88 92 96 77 66 89 77 97 52 61 60 71 45 55 33↵

五、 輸出範例：

1
  *
  * *
  * * *
* * * *
* * * * *
* * * * *
- - - - -
E D C B A

2
*
*
*
*
*
*
* * *   *
* * * * *
* * * * *
- - - - -
E D C B A

3
*
* *
* * *
* * *   *
* * * * *
* * * * *
- - - - -
E D C B A
*/
