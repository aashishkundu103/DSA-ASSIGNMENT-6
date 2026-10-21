// UCS301 Data Structures Lab | Assignment 6
// Print circular list, including head again at end.
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
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;for(int i=0,x;i<n;i++){cin>>x;Node*t=new Node(x);if(tail)tail->next=t;else head=t;tail=t;}if(!head){cout<<"Empty\n";return 0;}tail->next=head;Node*p=head;do{cout<<p->val<<' ';p=p->next;}while(p!=head);cout<<head->val<<'\n';tail->next=nullptr;while(head){Node*t=head;head=head->next;delete t;}}
