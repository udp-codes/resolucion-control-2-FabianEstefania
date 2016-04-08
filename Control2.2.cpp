class Item
{
public:
    string valor
    int cant_llamados;
};

class nodo
{
    Item *I;
    nodo *next;
};

class lista
{
public:
    nodo *head;

    lista()
    {
        head == NULL;
    }


    void agregar(Item *I)
    {
        if(head==NULL)
        {
            head = new nodo();

            head->Item=I;
        }

        else
        {
            nodo *nuevo = new nodo();
            nuevo->Item=I;
            nuevo->next(head);
            head = nuevo;
        }
    }

    float probabiliadad (string valor)
    {
        if(head==NULL)
        {
            return 0;
        }

        else
        {
            int count=0;
            nodo *aux=head;
            while(aux->next!=NULL)
            {
                count++;
            }
            return (1/count);
        }

    }

};

