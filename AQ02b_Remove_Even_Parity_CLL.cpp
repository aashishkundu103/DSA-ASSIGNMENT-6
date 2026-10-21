// UCS301 Data Structures Lab | Assignment 6
// Delete all circular singly-list nodes with even binary popcount.
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

struct Node{int v;Node*next;Node(int x):v(x),next(nullptr){}};
int bits(int x){unsigned int u=(unsigned int)x;int c=0;while(u){u&=u-1;c++;}return c;}
int main(){int n;cin>>n;vector<Node*>nodes(n);for(int i=0;i<n;i++){int x;cin>>x;nodes[i]=new Node(x);if(i)nodes[i-1]->next=nodes[i];}if(n==0){cout<<"Empty\n";return 0;}nodes.back()->next=nodes[0];Node dummy(0);dummy.next=nodes[0];Node*head=nodes[0],*tail=nodes.back();tail->next=&dummy;Node*prev=&dummy,*cur=dummy.next;while(cur!=&dummy){Node*next=cur->next;if(bits(cur->v)%2==0){prev->next=next;delete cur;}else prev=cur;cur=next;}head=dummy.next;if(head==&dummy){cout<<"Empty\n";return 0;}prev->next=head;Node*p=head;do{cout<<p->v<<' ';p=p->next;}while(p!=head);cout<<'\n';prev->next=nullptr;while(head){Node*t=head;head=head->next;delete t;}}
