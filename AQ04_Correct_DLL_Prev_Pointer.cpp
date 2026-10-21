// UCS301 Data Structures Lab | Assignment 6
// Fix a wrong prev pointer when all forward next pointers are correct.
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
int main(){int n;cin>>n;vector<Node*>a(n);for(int i=0;i<n;i++){int x;cin>>x;a[i]=new Node(x);if(i){a[i-1]->next=a[i];a[i]->prev=a[i-1];}}int bad,target;cout<<"Corrupt prev pointer at 1-based node index, pointing to index (0=NULL): ";cin>>bad>>target;if(bad>=1&&bad<=n&&target>=0&&target<=n)a[bad-1]->prev=target?a[target-1]:nullptr;Node*previous=nullptr;for(Node*p=n?a[0]:nullptr;p;p=p->next){if(p->prev!=previous){cout<<"Corrected prev pointer of node "<<p->v<<'\n';p->prev=previous;}previous=p;}cout<<"Forward: ";for(Node*p=n?a[0]:nullptr;p;p=p->next)cout<<p->v<<' ';cout<<"\nBackward: ";for(Node*p=previous;p;p=p->prev)cout<<p->v<<' ';cout<<'\n';for(Node*t:a)delete t;}
