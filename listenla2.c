#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *sig;
};
main()
{
    struct node *cab, *med, *col,*n;
    cab = malloc(sizeof(struct node));
    med = malloc (sizeof(struct node));
    col = malloc (sizeof(struct node));
    n = malloc(sizeof(struct node));
    cab -> val = 1;
    med -> val = 2;
    col -> val = 3;
    n -> val = 8;

    n -> sig = cab;
    cab -> sig = med;
    med -> sig = col;
    col -> sig = NULL;

    //añadir(n);

    struct node *t;
    t = n;
    while (t != NULL)
    {
        printf("%d\t", t->val);
        t = t -> sig;
    }
}
/*struct node *crearlista(int n)
{
    struct node *head;
    struct node *prev;
    struct node *cur;
    int i;
    head = malloc (sizeof(struct node));
    head -> val = 1;
    prev = head;
    for (i = 2; i <= n; i++)
        {
            cur = malloc (sizeof (struct node));
            cur -> val = i;
            prev -> next = cur;
            prev = cur;
        }
        prev -> next = NULL;
    return head;
}*/


