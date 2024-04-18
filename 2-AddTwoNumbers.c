/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* newnode(int val,struct ListNode*last)
{
    struct ListNode*temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val=val;
    temp->next=NULL;
    if(last==NULL)
        return temp;
    else
        return (last=last->next=temp);
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int extra=0;
    struct ListNode*head=NULL,*tail=NULL;
    while(l1!=NULL&&l2!=NULL)
    {
        int val=extra+l1->val+l2->val;
        extra=val/10;
        if(head==NULL)
            head=tail=newnode(val%10,tail);
        else
            tail=newnode(val%10,tail);
        l1=l1->next,l2=l2->next;
         
    }
    while(l1)
    {
        int val=extra+l1->val;
        extra=val/10;
        tail=newnode(val%10,tail);
        l1=l1->next;
    }

    while(l2)
    {
        int val=extra+l2->val;
        extra=val/10;
        tail=newnode(val%10,tail);
        l2=l2->next;
    }
    while(extra>0)
    {
        tail=newnode(extra%10,tail);
        extra=extra/10;
    }
    return head;

}
