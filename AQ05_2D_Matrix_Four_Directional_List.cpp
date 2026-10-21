// UCS301 Data Structures Lab | Assignment 6
// Create nodes with left(prev), right(next), up and down links.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <climits>
#include <sstream>
#include <cctype>
#include <cmath>
#include <functional>
#include <utility>
#include <tuple>
using namespace std;

struct Node{int val;Node*prev,*next,*up,*down;Node(int x):val(x),prev(nullptr),next(nullptr),up(nullptr),down(nullptr){}};
int main(){int r,c;cin>>r>>c;if(r<=0||c<=0)return 0;vector<vector<Node*>>grid(r,vector<Node*>(c));for(int i=0;i<r;i++)for(int j=0;j<c;j++){int x;cin>>x;grid[i][j]=new Node(x);}for(int i=0;i<r;i++)for(int j=0;j<c;j++){Node*p=grid[i][j];if(j>0)p->prev=grid[i][j-1];if(j+1<c)p->next=grid[i][j+1];if(i>0)p->up=grid[i-1][j];if(i+1<r)p->down=grid[i+1][j];}cout<<"Traversing next and down pointers:\n";for(Node*row=grid[0][0];row;row=row->down){for(Node*p=row;p;p=p->next)cout<<p->val<<' ';cout<<'\n';}for(auto&row:grid)for(Node*p:row)delete p;}
