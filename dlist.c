// Tommy Nguyen
// Cwid: 888598620


#ifndef dlist_h
#define dlist_h

#include <stdio.h>
#include <stdbool.h>


//-------------------------------------------------
typedef struct dnode dnode;
struct dnode {
  int data;
  dnode* prev;
  dnode* next;
};

typedef struct dlist dlist;
struct dlist {
  dnode* head;
  dnode* tail;
  size_t size;
};

//-------------------------------------------------
dnode* dnode_create(int data, dnode* prev, dnode* next) {



}
dlist* dlist_create(void) {



}







bool dlist_empty(dlist* list) {



}
size_t dlist_size(dlist* list) {



}







void dlist_popfront(dlist* list) {


}
void dlist_popback(dlist* list) {


}
