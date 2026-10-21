// UCS301 Data Structures Lab | Assignment 6
// Split CLL in two circular halves; first half gets extra node if odd.
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
void display(Node*h){if(!h){cout<<"Empty\n";return;}Node*p=h;do{cout<<p->v<<' ';p=p->next;}while(p!=h);cout<<'\n';}
int main(){int n;cin>>n;if(n<=0){cout<<"Both halves empty\n";return 0;}vector<Node*>a(n);for(int i=0;i<n;i++){int x;cin>>x;a[i]=new Node(x);if(i)a[i-1]->next=a[i];}a.back()->next=a[0];int first=(n+1)/2;Node*h1=a[0],*h2=first<n?a[first]:nullptr;a[first-1]->next=h1;if(h2)a.back()->next=h2;cout<<"First: ";display(h1);cout<<"Second: ";display(h2);for(Node*t:a)delete t;}
