
/* 
 * File:   list.h
 * Author: Francesco
 *
 * Created on 19 ottobre 2018, 10.39
 */

#ifndef LIST_H
#define LIST_H
#include "tinfo.h"
#include <stdbool.h>

typedef int TInfo;

struct SNode {
    TInfo info;
    struct SNode* link;
};

typedef struct SNode TNode;
typedef TNode* TList;


TNode* node_create(TInfo info);
void node_destroy(TNode* node);
TList list_create();
TList list_insert(TList l, TInfo info);
TList list_delete_node(TList l, TInfo info);
TNode* list_search(TList l, TInfo info);
void list_visit(TList l);

#endif /* LIST_H */

