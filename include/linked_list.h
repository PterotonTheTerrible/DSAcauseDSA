#ifndef LINKED_LIST
#define LINKED_LIST

/* Defined at the module level 
 * expected to contain pointers to user defined
 * functions as follows:
 *  (int)(cmp)(void*, void*) // return 0 on match, return non-zero on no-match
 *  (int)(free_data)(void *data) // free custom data type stored in list
 */
typedef struct singly_linked slink;
typedef struct doubly_linked dlink;
typedef struct circly_linked clink;

enum list_type { SLINK, DLINK, CLINK };

/*  returns list type based on value passed
 *  valid values found in enum list_types */
void *create_ll(int type);

/* prepend arbitrary data to list 
 * return 0 on success
 * return non-zero on failure 
 */
int push_ll(void *list_head, void *data);

/*   */
/* append arbitrary data to list 
 * return 0 on success
 * return non-zero on failure 
 */
int append_ll(void *list_head, void *data);

/* free all memory used by list 
 * return 0 on success
 * return non-zero on failure 
 */
int destroy_ll(void *list_head);

/* finds data in the list based on
 * user defined cmp function 
 * return pointer to the data container if found
 * return NULL on failure 
 */
void *find_data_ll(void *list_head, void *data);

/* remove arbitrary data from list based on
 * user defined cmp function
 * return pointer to the data container if found
 * return NULL on failure
 */
void *remove_data(void *list_head, void *data);

#endif /* LINKED_LIST */
