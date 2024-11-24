void heap(char *p, int l)
{
    if (l <= 1)
        return;

    buildmaxheap(p, l);

    char y = p[0];
    p[0] = p[l - 1];
    p[l - 1] = y;

    maxheapify(p, l - 1, 0);
    heap(p, l - 1);
}

void buildmaxheap(char *p, int l)
{
    for (int i = l / 2 - 1; i >= 0; i--)
        maxheapify(p, l, i);
}

void maxheapify(char *p, int heapsize, int l)
{
    int largest = l;
    int left = 2 * l + 1;
    int right = 2 * l + 2;


    if (left < heapsize && p[left] > p[largest])
        largest = left;

    if (right < heapsize && p[right] > p[largest])
        largest = right;


    if (largest != l)
    {

        char y = p[largest];
        p[largest] = p[l];
        p[l] = y;


        maxheapify(p, heapsize, largest);
    }
}
