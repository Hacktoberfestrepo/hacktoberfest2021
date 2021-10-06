#include <stdio.h>
#include <stdlib.h>

struct node
{
    int freq, prop;
    struct node *left, *right;
} * start;

void heapify(struct node *s, int i, int n)
{
    int lc = 2 * i + 1, rc = lc + 1, min = i;
    if (lc < n && s[min].freq > s[lc].freq)
        min = lc;
    if (rc < n && s[min].freq > s[rc].freq)
        min = rc;
    if (min != i)
    {
        int temp = s[min].freq;
        s[min].freq = s[i].freq;
        s[i].freq = temp;
        temp = s[min].prop;
        s[min].prop = s[i].prop;
        s[i].prop = temp;
        struct node *l = s[min].left;
        s[min].left = s[i].left;
        s[i].left = l;
        l = s[min].right;
        s[min].right = s[i].right;
        s[i].right = l;
        heapify(s, min, n);
    }
}

void build_heap(struct node *s, int n)
{
    int start = n / 2;
    while (start--)
        heapify(s, start, n);
}

void upper_heapify(struct node *s, int n)
{
    int i = n - 1;
    while (i != 0)
    {
        int j = (i - 1) / 2;
        if (s[j].freq > s[i].freq)
        {
            int temp = s[j].freq;
            s[j].freq = s[i].freq;
            s[i].freq = temp;
            temp = s[j].prop;
            s[j].prop = s[i].prop;
            s[i].prop = temp;
            struct node *l = s[j].left;
            s[j].left = s[i].left;
            s[i].left = l;
            l = s[j].right;
            s[j].right = s[i].right;
            s[i].right = l;
            i = j;
        }
        else
        {
            break;
        }
    }
}

struct node extract_min(struct node *s, int *n)
{
    struct node val = s[0];
    s[0] = s[(*n) - 1];
    (*n)--;
    heapify(s, 0, (*n));
    return val;
}

void huffman_gen(struct node *s, int n)
{
    build_heap(s, n);
    while (n != 1)
    {
        struct node s1 = extract_min(s, &n);
        struct node *temp1 = (struct node *)malloc(sizeof(struct node));
        temp1->freq = s1.freq;
        temp1->prop = s1.prop;
        temp1->left = s1.left;
        temp1->right = s1.right;
        struct node s2 = extract_min(s, &n);
        struct node *temp2 = (struct node *)malloc(sizeof(struct node));
        temp2->freq = s2.freq;
        temp2->prop = s2.prop;
        temp2->left = s2.left;
        temp2->right = s2.right;
        s[n].freq = s1.freq + s2.freq;
        s[n].prop = 0;
        s[n].left = temp1;
        s[n].right = temp2;
        n++;
        upper_heapify(s, n);
    }
}

void display(struct node *s)
{
    if (s == NULL)
        printf("NULL ");
    else
    {
        printf("%d->", s->freq);
        display(s->left);
        display(s->right);
    }
}

int main()
{
    int n;
    printf("enter the no. of letters:");
    scanf("%d", &n);
    struct node *ch = (struct node *)malloc(n * sizeof(struct node));
    for (int i = 0; i < n; i++)
    {
        ch[i].prop = 1;
        ch[i].left = NULL;
        ch[i].right = NULL;
    }
    for (int i = 0; i < n; i++)
    {
        printf("enter the freq:");
        scanf("%d", &ch[i].freq);
    }
    huffman_gen(ch, n);
    printf("%d->", ch[0].freq);
    display(ch[0].left);
    display(ch[0].right);

    return 0;
}