typedef struct  {
    char* key;
    char* value;
} ht_item;

/**
 * @brief Hash table structure
 * it contains the size of the table (size), 
 * the number of items in the table (count) 
 * and a pointer to the items (item)
*/
typedef struct {
    int size;
    int base_size;
    int count;
    ht_item** items;
} ht_hash_table;

void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char * ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* ht, const char* key);

