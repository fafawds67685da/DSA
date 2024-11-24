void merge(char *p, int l)
{
    if (l > 1)
    {
        int mid = l / 2;

        merge(p, mid);
        merge(p + mid, l - mid);

        mergesort(p, 0, mid, l);
    }
}

void mergesort(char *p, int low, int mid, int high)
{
    int left_size = mid;
    int right_size = high - mid;

    char left[left_size], right[right_size];

    for (int i = 0; i < left_size; i++)
        left[i] = p[low + i];
    for (int j = 0; j < right_size; j++)
        right[j] = p[mid + j];

    int i = 0, j = 0, k = low;
    while (i < left_size && j < right_size)
    {
        if (left[i] <= right[j])
        {
            p[k] = left[i];
            i++;
        }
        else
        {
            p[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < left_size)
    {
        p[k] = left[i];
        i++;
        k++;
    }

    while (j < right_size)
    {
        p[k] = right[j];
        j++;
        k++;
    }
}
