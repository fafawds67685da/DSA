sn*rec(sn*head)
{


    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    sn* newHead = rec(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;

}
