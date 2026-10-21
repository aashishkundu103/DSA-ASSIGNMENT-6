// UCS301 Data Structures Lab | Assignment 6
// Check whether next pointers return to the head.
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

struct Node{int val;Node*next;Node(int x):val(x),next(nullptr){}};
int main(){int n;cin>>n;vector<Node*>nodes(n);for(int i=0;i<n;i++){int x;cin>>x;nodes[i]=new Node(x);if(i)nodes[i-1]->next=nodes[i];}int circular;cout<<"Make circular? (1=yes 0=no): ";cin>>circular;if(n&&circular==1)nodes.back()->next=nodes[0];Node*head=n?nodes[0]:nullptr,*p=head;bool ok=false;if(head){do{p=p->next;}while(p&&p!=head);ok=(p==head);}cout<<(ok?"True":"False")<<'\n';for(Node*t:nodes)delete t;}
