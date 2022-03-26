#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

typedef struct{
  	char Nombre[70];
  	char artista[70];
  	lista *genero;
    int year;
  	lista *listaDeListas
} Cancion;

typedef struct{
  	int cantidad;
  	char nombre[8];
  	
}
struct Node {
    void * data;
    Node * next;
    Node * prev;
};

struct List {
    Node * head;
    Node * tail;
    Node * current;
}; 

typedef struct{
  	char Nombre[70];
  	char artista[70];
  	lista *genero;
    int year;
  	lista *listaDeListas
} Cancion;

typedef struct{
  	int cantidad;
  	char nombre[8];
  	
}
struct Node {
    void * data;
    Node * next;
    Node * prev;
};

struct List {
    Node * head;
    Node * tail;
    Node * current;
}; 

const char *get_csv_field (char * tmp, int k) {
    int open_mark = 0;
    char* ret=(char*) malloc (100*sizeof(char));
    int ini_i=0, i=0;
    int j=0;
    while(tmp[i+1]!='\0'){

        if(tmp[i]== '\"'){
            open_mark = 1-open_mark;
            if(open_mark) ini_i = i+1;
            i++;
            continue;
        }

        if(open_mark || tmp[i]!= ','){
            if(k==j) ret[i-ini_i] = tmp[i];
            i++;
            continue;
        }

        if(tmp[i]== ','){
            if(k==j) {
               ret[i-ini_i] = 0;
               return ret;
            }
            j++; ini_i = i+1;
        }

        i++;
    }

    if(k==j) {
       ret[i-ini_i] = 0;
       return ret;
    }


    return NULL;
}
