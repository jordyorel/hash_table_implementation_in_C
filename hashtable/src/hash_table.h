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
    int count;
    ht_item** items;
} ht_hashe_table;
