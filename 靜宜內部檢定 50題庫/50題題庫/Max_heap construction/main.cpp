//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <stack>
#include <algorithm>
using namespace std;

int find_level(vector<pair<int,int> > &linked_list_tree,int index){
    if(linked_list_tree[index]==pair<int,int>{0,0} )//is leave point
        return 1;
    int left,right;
    if(linked_list_tree[index].first>0)
        left=find_level(linked_list_tree,linked_list_tree[index].first);
    else
        left=-1;
    if(linked_list_tree[index].second>0)
        right=find_level(linked_list_tree,linked_list_tree[index].second);
    else
        right=-1;
    return 1+max(left,right);

}
short find_next(vector<pair<int,int> > &to_child_tree,short index){
    //if is leave node->return index(because find this way's ending)
    if(to_child_tree[index]==pair<int,int>{0,0})
        return index;
    //if is inside node->resi... left and right,and min(left,right)
    return min( find_next(to_child_tree,to_child_tree[index].first),
    find_next(to_child_tree,to_child_tree[index].second) );
}

void bfs(vector<int> &tree,vector<int> &to_per_tree,
vector<pair<int,int> > &to_child_tree){
    bool leftright=true;
    for(short i=0,next_index=-1;i<tree.size();i++ ){
        //next_index is where node is next insert space
        to_per_tree[i]=next_index;
        if(leftright){//true is left(and insert new node)
            if(next_index==-1){
                next_index=0;
                //to_child_tree[0]=pair<int,int>{-1,-1};
            }else{
                to_child_tree[next_index].first=i;
                leftright= ! leftright;
            }
        }else{//false is right
            to_child_tree[next_index].second=i;
            next_index=find_next(to_child_tree,0);
            leftright= ! leftright;
        }
        //first is insert node to per and child tree

        /*for(short j=0;j<to_child_tree.size();j++){
            cout<<"index="<<j<<" left="<<
            to_child_tree[j].first<<" right="<<
            to_child_tree[j].second<<endl;
        }
        cout<<"next_index="<<next_index<<" leftright="
        <<leftright<<"\n\n";*/

        /*for(int i:to_per_tree)
            cout<<i<<' ';
        cout<<endl;*/
        //just check can or not build this tree

        //second is swap to check this node's value > child node's value
        for(int j=i;j>0 && tree[j]>tree[ to_per_tree[j] ];
        j=to_per_tree[j]){
            swap(tree[j],tree[ to_per_tree[j] ]);
            /*for(int ii:tree)
                cout<<ii<<' ';
            cout<<endl;
            //check can to swap or not to work*/
        }
    }
    return;
}

void front_tree(vector<int> &tree,vector<int> &to_per_tree,
vector<pair<int,int> > &to_child_tree,int &max_level){
    //.fisrt is left child point, .second is right child point
    queue<int> to_do_list;
    to_do_list.push(0);
    //.first is inside point,.second is outside point(leave)
    while( to_do_list.size()  ){
        int i=to_do_list.front();
        to_do_list.pop();
        cout<<' '<<tree[i];
        if(to_child_tree[i].first){
            //child still is inside node
            to_do_list.push(to_child_tree[i].first);
        }
        if(to_child_tree[i].second){
            //child still is inside node
            to_do_list.push(to_child_tree[i].second);
        }
    }
    int nul=(1<<(max_level) )-1-tree.size();
    for(int i=0;i<nul;i++)
        cout<<" 0";
    cout<<endl;




    /*if(linked_list_tree[index].first==0){
    //this point is a leave point
        cout<<tree[index];
        if(level <max_level)
            cout<<" 0 0";
        return ;

    }
    cout<<tree[index];
    if( linked_list_tree[index].first>0 ){//this left child point isn't a null point
        cout<<' ';
        front_tree(tree,linked_list_tree,linked_list_tree[index].first
        ,max_level,level+1);
    }
    if( linked_list_tree[index].second>0 ){//this left child point isn't a null point
        cout<<' ';
        front_tree(tree,linked_list_tree,linked_list_tree[index].second
        ,max_level,level+1);
    }else
        cout<<" 0";*/
    return ;
}


int main() {
    unsigned int n;
    cin>>n;
    vector<int>input_tree(n,-1),to_per_tree(n,-1);
    vector<pair<int,int> > to_child_tree
    (input_tree.size(),{0,0});
    //to_child_tree.capacity(n);//just get to some momery space to tree
    for(int &i:input_tree)
        cin>>i;
    bfs(input_tree,to_per_tree,to_child_tree);
    int level=find_level(to_child_tree,0);
    cout<<level<<"\n0";
    front_tree(input_tree,to_per_tree,to_child_tree,level);
    return 0;
}
/*
一、程式範例描述：
輸入 n 個正整數，將個別正整數依序加入到Max Heap中。Max Heap是一棵complete binary tree，祖先節點的數值會比子孫節點的數值來的大。


二、輸入說明：
輸入一個正整數 n，假設 n < 16。

再輸入 n 個正整數來建立一棵 Max Heap。


三、輸出說明：
輸出 Max Heap 的高度。

輸出 Max Heap 的陣列表示法。索引值 0 的元素未用到，並被設定為 0。

高度是 2 則輸出 4 筆資料；高度是 3 則輸出 8 筆資料；高度是 4 則輸出 16 筆資料。


四、輸入範例：

5
1 2 3 4 5
8
2 6 3 7 8 4 5 9

五、輸出範例：

3
0 5 4 2 1 3 0 0
4
0 9 8 5 7 6 3 4 2 0 0 0 0 0 0 0

*/
