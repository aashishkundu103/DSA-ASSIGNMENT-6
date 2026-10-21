// UCS301 Data Structures Lab | Assignment 6
// Check whether a character doubly linked list is a palindrome.
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

struct Node{char data;Node*prev,*next;Node(char x):data(x),prev(nullptr),next(nullptr){}};
int main(){string s;getline(cin,s);Node*head=nullptr,*tail=nullptr;for(char c:s){Node*t=new Node(c);if(tail){tail->next=t;t->prev=tail;}else head=t;tail=t;}Node*l=head,*r=tail;bool ok=true;while(l&&r&&l!=r&&l->prev!=r){if(l->data!=r->data){ok=false;break;}l=l->next;r=r->prev;}cout<<(ok?"True":"False")<<'\n';while(head){Node*t=head;head=head->next;delete t;}}
