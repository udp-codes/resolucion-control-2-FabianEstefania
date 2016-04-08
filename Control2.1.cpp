class SetTDA
{
    void insert(Data X);
    Data delete();
    bool isEmpy();
};

class ConjuntoTDA
{
    Data x;
    SetTDA *TDA

    void agrega(Data x)
    {
        TDA->insert(x)
    }

    Data saca()
    {
        return (TDA->delete());
    }

    bool estaVacio()
    {
        return TDA->isEmpy();
    }

    bool pertenece(Data x)
    {
        SetTDA *aux=TDA;
        while(!aux->isEmpy())
        {
            if(aux->delete()==x)
            {
                return true;
            }
        }
        return false;
    }

    ConjuntoTDA interseccion(ConjuntoTDA *c)
    {
        SetTDA *aux=TDA;
        ConjuntoTDA *inter;
        data iterador;
        data iterador_TDA
        while(!c->estaVacio())
        {
            iterador=c->delete();
            while(!aux->isEmpy())
            {
                iterador_TDA=aux->delete();
                if(iterador==iterador_TDA)
                {
                    inter->agrega(iterador);
                }
            }
            aux=TDA;
        }
        return inter;
    }

    void Intersecta(ConjuntoTDA *c)
    {
        SetTDA *aux=TDA;
        ConjuntoTDA *inter;
        data iterador;
        data iterador_TDA
        while(!c->estaVacio())
        {
            iterador=c->delete();
            while(!aux->isEmpy())
            {
                iterador_TDA=aux->delete();
                if(iterador==iterador_TDA)
                {
                    inter->agrega(iterador);
                }
            }
            aux=TDA;
        }

        TDA=inter;
    }

    ConjuntoTDA union(ConjuntoTDA *c)
    {
        SetTDA *aux=TDA;
        ConjuntoTDA *inter=TDA;
        data iterador;
        data iterador_TDA
        int count=0;
        while(!c->estaVacio())
        {
            iterador=c->delete();
            while(!aux->isEmpy())
            {
                iterador_TDA=aux->delete();
                if(iterador==iterador_TDA)
                {
                    count++
                }
                if(count==0)
                {
                    inter->agrega(iterador);
                }
            }
            count=0;
            aux=TDA;
        }

        return inter;
    }

    void union(ConjuntoTDA *c)
    {
        SetTDA *aux=TDA;
        ConjuntoTDA *inter=TDA;
        data iterador;
        data iterador_TDA
        int count=0;
        while(!c->estaVacio())
        {
            iterador=c->delete();
            while(!aux->isEmpy())
            {
                iterador_TDA=aux->delete();
                if(iterador==iterador_TDA)
                {
                    count++
                }
                if(count==0)
                {
                    inter->agrega(iterador);
                }
            }
            count=0;
            aux=TDA;
        }

        TDA=inter;
};
