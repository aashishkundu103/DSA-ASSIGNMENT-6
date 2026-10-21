// UCS301 Data Structures Lab | Assignment 6
// Circular singly list: insert front/end/before/after, delete/search/display.
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

struct Node{int data;Node*next;Node(int x):data(x),next(nullptr){}};
int main(){Node*tail=nullptr;int ch;do{cout<<"1.Insert front 2.Insert end 3.Insert before 4.Insert after 5.Delete value 6.Search 7.Display 0.Exit: ";if(!(cin>>ch))break;int x,key;Node*t;
if(ch==1||ch==2){cin>>x;t=new Node(x);if(!tail){tail=t;t->next=t;}else{t->next=tail->next;tail->next=t;if(ch==2)tail=t;}}
else if(ch==3||ch==4){cout<<"Key and new value: ";cin>>key>>x;if(!tail){cout<<"Empty\n";continue;}Node*cur=tail->next,*prev=tail;do{if(cur->data==key)break;prev=cur;cur=cur->next;}while(cur!=tail->next);if(cur->data!=key){cout<<"Not found\n";continue;}t=new Node(x);if(ch==3){t->next=cur;prev->next=t;if(cur==tail->next){} }else{t->next=cur->next;cur->next=t;if(cur==tail)tail=t;}}
else if(ch==5){cin>>key;if(!tail){cout<<"Empty\n";continue;}Node*cur=tail->next,*prev=tail;do{if(cur->data==key)break;prev=cur;cur=cur->next;}while(cur!=tail->next);if(cur->data!=key){cout<<"Not found\n";continue;}if(cur==tail&&cur->next==cur)tail=nullptr;else{prev->next=cur->next;if(cur==tail)tail=prev;}delete cur;}
else if(ch==6){cin>>key;if(!tail){cout<<"Not found\n";continue;}Node*p=tail->next;int pos=1;do{if(p->data==key)break;p=p->next;pos++;}while(p!=tail->next);if(p->data==key)cout<<"Position: "<<pos<<'\n';else cout<<"Not found\n";}
else if(ch==7){if(!tail){cout<<"Empty\n";continue;}Node*p=tail->next;do{cout<<p->data<<' ';p=p->next;}while(p!=tail->next);cout<<"(back to head)\n";}
}while(ch!=0);if(tail){Node*head=tail->next;tail->next=nullptr;while(head){Node*t=head;head=head->next;delete t;}}}
