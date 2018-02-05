#include <iostream>

using namespace std;

struct nodo{
    struct nodo* der;
    int dato;
    struct nodo* izq;
};
struct nodo *lista;

//prototipos de funcion.
void insertarDerecha(struct nodo *&una_lista, int un_dato);//funcion para agregar un nodo a la derecha.
void insertarIzquierda(struct nodo *&una_lista, int un_dato);//funcion para agregar un nodo a la izquierda.

int op;
int numero;

int main(){
    lista = NULL;
    cout<<"[1]. Agregar Derecha"<<endl;
    cout<<"[2]. AgregarIzquierda"<<endl;
    cout<<"ingrese opcion: ";cin>>op;
    
    switch(op){
        case 1:
                cout<<"ingrese dato: ";cin>>numero;
                insertarDerecha(lista,numero);
                break;
        case 2: 
                cout<<"Ingresar dato: ";cin>>numero;
                insertarIzquierda(lista,numero);
                break;
    }
        
    return 0;
}

void insertarDerecha(struct nodo *&una_lista, int un_dato){
    nodo *aux,*nnod; //nodos auxiliares
    if(una_lista==NULL){ 
        una_lista = new(nodo);      //si la lista esta vacia
        una_lista->dato = un_dato; //se crea el un nodo que
        una_lista->der = NULL;     //inicia la lista.
        una_lista->izq = NULL;
    } 
    else{
        aux = una_lista;
        while(aux != NULL)  //si no esta vacia
            aux = aux->der; //se mueve hasta la ultima posicion (lado der.).
            
        nnod = new(nodo);
        nnod->dato = un_dato;   //se crea el nodo
        nnod->der = NULL;      //se agrega el dato deseado.
        nnod->izq = NULL;
        aux = nnod;  //se agrega el nuevo nodo a la lista.
    }
}
void insertarIzquierda(struct nodo *&una_lista, int un_dato){
    nodo *aux,*nnod; 
    if(una_lista==NULL){
        una_lista = new(nodo);
        una_lista->dato = un_dato;
        una_lista->der = NULL;
        una_lista->izq = NULL;
    } 
    else{
        aux = una_lista;
        while(aux != NULL)
            aux = aux->izq;
            
        nnod = new(nodo);
        nnod->dato = un_dato;
        nnod->izq = NULL;
        nnod->der = NULL;
        aux = nnod;
    }
}

