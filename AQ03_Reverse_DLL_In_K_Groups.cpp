// UCS301 Data Structures Lab | Assignment 6
// Reverse every group of k in a doubly linked list, including last short group.
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

struct Node{int v;Node*prev,*next;Node(int x):v(x),prev(nullptr),next(nullptr){}};
int main(){int n,k;cin>>n;vector<Node*>a(n);for(int i=0;i<n;i++){int x;cin>>x;a[i]=new Node(x);}cin>>k;if(k>1)for(int i=0;i<n;i+=k)reverse(a.begin()+i,a.begin()+min(n,i+k));for(int i=0;i<n;i++){a[i]->prev=i?a[i-1]:nullptr;a[i]->next=i+1<n?a[i+1]:nullptr;}for(Node*t=n?a[0]:nullptr;t;t=t->next)cout<<t->v<<' ';cout<<'\n';for(Node*t:a)delete t;}
