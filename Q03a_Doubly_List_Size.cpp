// UCS301 Data Structures Lab | Assignment 6
// Count nodes in a doubly linked list.
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

struct Node{int val;Node*prev,*next;Node(int x):val(x),prev(nullptr),next(nullptr){}};
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;for(int i=0,x;i<n;i++){cin>>x;Node*t=new Node(x);if(tail){tail->next=t;t->prev=tail;}else head=t;tail=t;}int count=0;for(Node*t=head;t;t=t->next)count++;cout<<"DLL size: "<<count<<'\n';while(head){Node*t=head;head=head->next;delete t;}}
