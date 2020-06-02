/*
Delete Node in a Linked List
============================
URL: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3348/

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Example 1:
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.

Example 2:
Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
Explanation: You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.
 
Note:

The linked list will have at least two elements.
All of the nodes' values will be unique.
The given node will not be the tail and it will always be a valid node of the linked list.
Do not return anything from your function.

*/

#include<iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete(temp);
        
    }
};

void printList(ListNode * head){
    if(head==NULL){
        cout<<"Empty List";
        return; 
    }
    ListNode * temp  = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
        
}

int main(){
    ListNode * node1 = new ListNode(4);
    ListNode * node2 = new ListNode(5);
    ListNode * node3 = new ListNode(1);
    ListNode * node4 = new ListNode(9);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;

    cout<<"List before deletion: "<<endl;
    printList(node1);
    
    Solution().deleteNode(node3); //deleting node3 (val=1)
    
    cout<<"List after deletion: "<<endl;
    printList(node1);



    


}