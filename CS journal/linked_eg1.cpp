class linked
{
    struct node
    {
        struct node *next;
        int data;
    }*start;

    public:
    linked()
    {
        start = NULL;
    }
    void create()
    {
        struct node *temp , *t;
        temp = new node;
        cout<<"Enter value";
        cin>>temp->data;
        temp->next = NULL;
        if(start == NULL)
        start = temp;
        else
        {
            t = start;
            while(t->next != NULL)
            t = t->next;

            t->next = temp;
        }
        
    }
};