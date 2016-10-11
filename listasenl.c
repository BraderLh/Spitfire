#include <stdio.h>
#include <stdlib.h>

/*struct sname
{
    int a;
    char b;
};


main ()
{
    struct sname s;
    s.a = 5;
    s.b = 'x';
}/*
struct node
{
    int val;
    struct node *next;
};
main()
{
    struct node *head, *middle, *tail;
    head = malloc (sizeof(struct node));
    middle = malloc (sizeof(struct node));
    tail = malloc (sizeof(struct node));
    head -> val = 1;
    middle -> val = 2;
    tail -> val = 3;
    head -> next = middle;
    middle -> next = tail;
    tail -> next = NULL;

    /*struct node *t;
    t = head;
    printf("%d\t", t->val);
    t = t -> next;
    printf("%d\t", t->val);
    t = t -> next;
    printf("%d\t", t -> val);*/

}
struct node *crearlista(int n)
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
}

