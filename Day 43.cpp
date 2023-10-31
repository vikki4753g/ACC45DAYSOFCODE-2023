/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* merge(ListNode* left,ListNode* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        ListNode* temp=new ListNode();
        ListNode* current=temp;
        while(left!=NULL && right!=NULL){
            if(left->val<right->val){
                current->next=left;
                left=left->next;
            }else{
                current->next=right;
                right=right->next;
            }
            current=current->next;
        }
        if(left!=NULL){
            current->next=left;
        }
        if(right!=NULL){
            current->next=right;
        }
        return temp->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temp=new ListNode();
        ListNode* temp1=temp->next;
        for(int i=0;i<lists.size();i++){
            temp1=merge(temp1,lists[i]);
        }
        return temp1;
    }
};
