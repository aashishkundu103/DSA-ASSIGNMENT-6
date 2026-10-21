// UCS301 Data Structures Lab | Assignment 6
// DLL menu: insert front/end/before/after; delete specific value; search and display.
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

struct Node{int data;Node*prev,*next;Node(int x):data(x),prev(nullptr),next(nullptr){}};
int main(){Node*head=nullptr;int ch;do{cout<<"1.Insert front 2.Insert end 3.Insert before key 4.Insert after key 5.Delete key 6.Search 7.Display 0.Exit: ";if(!(cin>>ch))break;int x,key;Node*p=head,*t;
if(ch==1){cin>>x;t=new Node(x);t->next=head;if(head)head->prev=t;head=t;}
else if(ch==2){cin>>x;t=new Node(x);if(!head)head=t;else{while(p->next)p=p->next;p->next=t;t->prev=p;}}
else if(ch==3||ch==4){cout<<"Key and value: ";cin>>key>>x;while(p&&p->data!=key)p=p->next;if(!p)cout<<"Not found\n";else{t=new Node(x);if(ch==3){t->prev=p->prev;t->next=p;if(p->prev)p->prev->next=t;else head=t;p->prev=t;}else{t->next=p->next;t->prev=p;if(p->next)p->next->prev=t;p->next=t;}}}
else if(ch==5){cin>>key;while(p&&p->data!=key)p=p->next;if(!p)cout<<"Not found\n";else{if(p->prev)p->prev->next=p->next;else head=p->next;if(p->next)p->next->prev=p->prev;delete p;}}
else if(ch==6){cin>>key;int pos=1;while(p&&p->data!=key){p=p->next;pos++;}if(p)cout<<"Found at position "<<pos<<'\n';else cout<<"Not found\n";}
else if(ch==7){while(p){cout<<p->data<<(p->next?" <-> ":" <-> NULL\n");p=p->next;}if(!head)cout<<"Empty\n";}
}while(ch!=0);while(head){Node*t=head;head=head->next;delete t;}}
