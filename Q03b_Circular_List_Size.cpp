// UCS301 Data Structures Lab | Assignment 6
// Count nodes in a circular singly linked list.
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
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;for(int i=0,x;i<n;i++){cin>>x;Node*t=new Node(x);if(tail)tail->next=t;else head=t;tail=t;}if(tail)tail->next=head;int count=0;if(head){Node*t=head;do{count++;t=t->next;}while(t!=head);}cout<<"CLL size: "<<count<<'\n';if(tail)tail->next=nullptr;while(head){Node*t=head;head=head->next;delete t;}}
