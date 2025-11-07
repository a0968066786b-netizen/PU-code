//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <stack>
using namespace std;
pair<int,int> bfs(vector<int> &tree,
vector<pair<int,int> > &linked_list_tree){
    queue<int> to_do_list;
    to_do_list.push(0);
    int index=1;//to tral.. left sub_point's index
    pair<int,int> point={};
    //.first is inside point,.second is outside point(leave)
    while( to_do_list.size()  ){
        int i=to_do_list.front();
        to_do_list.pop();
        if(index>=tree.size()){
        //this point is leave point,
        //but need to understand is real point or fake point
            if(tree[i]){
                point.second++;
                linked_list_tree[i]={0,0};
            }
        }else{
            linked_list_tree[i].first=index;
            to_do_list.push(index);
            linked_list_tree[i].second=index+1;
            to_do_list.push(index+1);
            index+=2;
            point.first++;
        }
    }
    /*for(short i=0;i<linked_list_tree.size();i++){
        cout<<"index="<<i<<" left="<<
        linked_list_tree[i].first<<" right="<<
        linked_list_tree[i].second<<endl;
    }*/
    return point;
}

void front_tree(vector<int> &tree,
vector<pair<int,int> > &linked_list_tree ,int index){
    //.fisrt is left child point, .second is right child point
    if(linked_list_tree[index].first==0){//this point is a leave point
        cout<<tree[index];
        return ;
    }
    cout<<tree[index];
    if( tree[ linked_list_tree[index].first ] ){//this left child point isn't a null point
        cout<<' ';
        front_tree(tree,linked_list_tree,linked_list_tree[index].first);
    }
    if( tree[ linked_list_tree[index].second ] ){//this left child point isn't a null point
        cout<<' ';
        front_tree(tree,linked_list_tree,linked_list_tree[index].second);
    }
    return ;
}

void med_tree(vector<int> &tree,
vector<pair<int,int> > &linked_list_tree ,int index){
    //.fisrt is left child point, .second is right child point
    if(linked_list_tree[index].first==0){//this point is a leave point
        cout<<tree[index];
        return ;
    }
    if( tree[ linked_list_tree[index].first ] ){//this left child point isn't a null point
        med_tree(tree,linked_list_tree,linked_list_tree[index].first);
    }
    cout<<' '<<tree[index];
    if( tree[ linked_list_tree[index].second ] ){//this left child point isn't a null point
        cout<<' ';
        med_tree(tree,linked_list_tree,linked_list_tree[index].second);
    }
    return ;
}

void back_tree(vector<int> &tree,
vector<pair<int,int> > &linked_list_tree ,int index){
    //.fisrt is left child point, .second is right child point
    if(linked_list_tree[index].first==0){//this point is a leave point
        cout<<tree[index];
        return ;
    }
    if( tree[ linked_list_tree[index].first ] ){//this left child point isn't a null point
        back_tree(tree,linked_list_tree,linked_list_tree[index].first);
    }
    if( tree[ linked_list_tree[index].second ] ){//this left child point isn't a null point
        cout<<' ';
        back_tree(tree,linked_list_tree,linked_list_tree[index].second);
    }
    cout<<' '<<tree[index];
    return ;
}


int main() {
    unsigned int n;
    cin>>n;
    vector<int>bin_tree(n-1,-1);
    vector<pair<int,int> > linked_list_tree
    (bin_tree.size(),{-1,-1});
    cin>>n;
    for(int &i:bin_tree)
        cin>>i;
    bfs(bin_tree,linked_list_tree);
    front_tree(bin_tree,linked_list_tree,0);
    cout<<endl;
    med_tree(bin_tree,linked_list_tree,0);
    cout<<endl;
    back_tree(bin_tree,linked_list_tree,0);
    cout<<endl;
    return 0;
}
