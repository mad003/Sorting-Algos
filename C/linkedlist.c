#include <stdio.h>
#include <stdlib.h>
 
struct linkeList{
    int data;
    struct linkeList * ptr;
};

void show(struct linkeList *ab){
    while(ab != NULL){
        printf("\n %d",ab->data);
        ab = ab->ptr;
    }
}
struct linkeList * setFirst(struct linkeList *ab,int data){
    struct linkeList *ptr = (struct linkeList*) malloc(sizeof(struct linkeList));
    ptr->data = data;
    ptr->ptr = ab;
    return ptr;
}

struct linkeList * setIndex(struct linkeList *ac,int integar, int index){
    struct linkeList * ptr= (struct linkeList*) malloc(sizeof(struct linkeList));
    struct linkeList *p = ac;
     int i =0;
     while(i!= index-1){
         p = p->ptr;
         i++;
     }
     ptr->data = integar;
     ptr->ptr = p->ptr;
     p->ptr = ptr;
     return ac;
}

struct linkeList* setLast(struct linkeList *ad,int integar){
    struct linkeList *heap = (struct linkeList*)malloc(sizeof(struct linkeList));
     heap->data = integar;
     struct linkeList *p = ad;
    while(p->ptr != NULL){
       p = p->ptr;

    }
    p->ptr = heap;
    heap->ptr = NULL;
    
   
    return ad;
}

struct linkeList * setNode(struct linkeList *ae,struct linkeList *  node,int data){
    struct linkeList *heap = (struct linkeList*) malloc(sizeof(struct linkeList));
    heap->data = data;
    heap->ptr = node->ptr;
    node->ptr = heap;
    return ae;
}
int main(){
    struct linkeList * head;
    struct linkeList *harry;
    struct linkeList *sumit;
    head = (struct linkeList*) malloc(sizeof(struct linkeList));
    harry = (struct linkeList*) malloc(sizeof(struct linkeList));
    sumit = (struct linkeList*) malloc(sizeof(struct linkeList));
    head->data= 190;
    head->ptr = harry;

    harry->data = 87;
    harry->ptr= sumit;

    sumit->data = 89;
    sumit->ptr = NULL;
    
    //head = setFirst(head,6);
    //head = setIndex(head,78,2);
    //head = setLast(head,890);
    head = setNode(head,harry,876);
    show(head);

    return 0;
}
