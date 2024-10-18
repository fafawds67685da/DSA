sn* dup(sn* head)
{
    sn* temp, *temp2, *p1 = NULL, *p2 = NULL;
    temp = head;

    if (temp == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    if (temp->next == NULL)
    {
        printf("Since only one node is present, duplicate elements cannot be present\n");
        return head;
    }

    while (temp != NULL)
    {
        temp2 = temp->next;
        p2 = temp;

        while (temp2 != NULL)
        {
            if (temp->info == temp2->info)
            {
                p2->next = temp2->next;
                free(temp2);
                temp2 = p2->next;
            }
            else
            {
                p2 = temp2;
                temp2 = temp2->next;
            }
        }
        temp = temp->next;
    }
    return head;
}

