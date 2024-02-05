#include<stdio.h>
#include<stdlib.h>

#include "hash_table.h"

// The function is marked as static because it will only ever be called by code internal to the hash table.
static ht_item* ht_new_item(const char* k, const char* v) {
    ht_item* i = malloc(sizeof(ht_item));
    i->key = strdup(k);
    i->value = strdup(v);
    return i;
}

ht_hashe_table* ht_new() {
    ht_hashe_table* ht = malloc(sizeof(ht_hashe_table));

    ht->size = 53;
    ht->count = 0;
    ht->items = calloc((size_t)ht->size, sizeof(ht_item*));
    return ht;
}

static void ht_del_item(ht_item* i) {
    free(i->key);
    free(i->value);
    free(i);
}

void ht__del_hash_table(ht_hashe_table* ht) {
    for(int i = 0; i < ht->size; i++) {
        ht_item* item = ht->items[i];
        if(item != NULL) {
            ht_del_item(item);
        }
    }
    free(ht->items);
    free(ht);

}