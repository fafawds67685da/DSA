sn * delete_beg(sn*head)
{
    sn *temp;
    temp=head;
    head=temp->next;
    free(temp);
    return head;
}
