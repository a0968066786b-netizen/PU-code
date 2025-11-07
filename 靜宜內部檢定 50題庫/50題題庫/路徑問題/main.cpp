#include <iostream>
#include <utility>
using namespace std;

pair<int,int> const sign[3]=
{pair<int,int>{0,1},pair<int,int>{1,0},pair<int,int>{1,1} };
//up,right and right_up
int to_end(pair<int,int> now_point, pair<int,int>&end_point){
    if(now_point==end_point)
        return 1;
    int sum=0;
    for(short i=0;i<3;i++){
        pair<int,int>next_point
        ={now_point.first+sign[i].first,now_point.second+sign[i].second};

        if(next_point.first<=end_point.first&&next_point.second<=end_point.second
           &&next_point.first>=next_point.second){
            /*cout<<"now_point="<<now_point.first<<' '<<now_point.second
            <<" next_point="<<next_point.first<<' '
            <<next_point.second<<" sum="<<sum<<endl;*/
            sum+=to_end(next_point,end_point);

        }
    }
    return sum;
}

int main(){
    pair<int,int> end_point;
    cin>>end_point.first>>end_point.second;
    cout << to_end(pair<int,int>{0,0},end_point) << endl;
    return 0;
}
/*
一、程式範例描述：
在座標上，我們從原點(0,0)出發，每次移動只能往上↑、往右→、往右上↗三種方向其中一種方向前進，

所有路徑座標 x 恆大於等於 y；我們可以以人工的方式算出，走到(1,1)有 2 種走法、(2,2)有 6 種走法。


二、輸入說明：
輸入兩個正整數 x、y，代表終點位置的座標。


三、輸出說明：
輸出總共有幾種走法。


四、輸入範例：

2 2
3 3
4 5

五、輸出範例：

6
22
90
*/
