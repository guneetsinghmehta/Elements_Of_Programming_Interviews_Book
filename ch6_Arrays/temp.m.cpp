#include <iostream>
#include <stack>
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

void printList(ListNode* head) {
	while(head!=NULL) {
		std::cout << head->val << '\t';
		head = head->next;
	}
	std::cout<<'\n';
}

ListNode* reverse (ListNode* head) {
	if(head==NULL){return NULL;}
	ListNode *a,*b,*c;
	a=NULL;
	b=head;
	c=head->next;
	while(c!=NULL) {
		b->next=a;
		a=b;
		b=c;
		c=c->next;
	}
	b->next=a;
	return b;
}

void reorderList(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        while(b != NULL && b->next != NULL && b->next->next!=NULL) {
            a = a->next;
            b = b->next->next;
        }
	b=a->next;
	a->next=NULL;
	b=reverse(b);
	a=head;
	ListNode *c;
	while(a!=NULL && b!=NULL){
		c=b->next;
		b->next = a->next;
		a->next=b;
		a=b->next;
		b=c;
	}
}

int main() {
	using namespace std;
	ListNode* head;
	ListNode a(1);
	a.next=new ListNode(2);
	a.next->next=new ListNode(3);
	//a.next->next->next=new ListNode(4);
	head = &a;

	printList(head);
	reorderList(head);
	printList(head);
	return 0;
}
