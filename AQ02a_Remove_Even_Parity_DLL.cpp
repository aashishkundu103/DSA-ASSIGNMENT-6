// UCS301 Data Structures Lab | Assignment 6
// Delete all DLL nodes whose binary popcount is even.
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
int bits(int x){unsigned int u=(unsigned int)x;int c=0;while(u){u&=u-1;c++;}return c;}
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;for(int i=0,x;i<n;i++){cin>>x;Node*t=new Node(x);if(tail){tail->next=t;t->prev=tail;}else head=t;tail=t;}for(Node*t=head;t;){Node*next=t->next;if(bits(t->v)%2==0){if(t->prev)t->prev->next=t->next;else head=t->next;if(t->next)t->next->prev=t->prev;delete t;}t=next;}for(Node*t=head;t;t=t->next)cout<<t->v<<' ';cout<<'\n';while(head){Node*t=head;head=head->next;delete t;}}
