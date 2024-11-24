void quick(char *p, int low, int high, int l)
{
    if (low < high)
    {
        int pivot_index = partition(p, low, high);
        quick(p, low, pivot_index - 1,l);
        quick(p, pivot_index + 1, high,l);
    }
}

int partition(char *p, int low, int high)
{
    char pivot = p[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (p[j] <= pivot)
        {
            i++;
            char temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
    }

    char temp = p[i + 1];
    p[i + 1] = p[high];
    p[high] = temp;

    return i + 1;
}
