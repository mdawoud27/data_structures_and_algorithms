#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct hash_node
{
    char *key;
    char *value;
    struct hash_node *next;
} hash_node_t;

typedef struct hash_table
{
    int size;
    hash_node_t **array;
} hash_table_t;

// Hash function
int hash(char *key)
{
    // simple hash function
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++)
        sum += key[i];

    return sum % TABLE_SIZE;
}

// Create a new hash table
hash_table_t* create_table(int size)
{
    hash_table_t* new_table = (hash_table_t*)malloc(sizeof(hash_table_t));
    new_table->size = size;
    new_table->array = (hash_node_t**)malloc(sizeof(hash_node_t*) * size);

    for (int i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return new_table;
}

// Insert a key-value pair into the hash table
void insert(hash_table_t* table, char *key, char *value)
{
    int index = hash(key);
    hash_node_t *new_node = (hash_node_t*)malloc(sizeof(hash_node_t));
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = table->array[index];
    table->array[index] = new_node;
}

// Retrieve a value by key from the hash table
char *get(hash_table_t* table, char *key)
{
    int index = hash(key);
    hash_node_t *ptr = table->array[index];

    while (ptr)
    {
        if (strcmp(ptr->key, key) == 0)
            return ptr->value;
    }
    return NULL;
}

// Free memory allocated for the hash table
void free_table(hash_table_t *table)
{
    for (int i = 0; i < table->size; i++)
    {
        hash_node_t *ptr = table->array[i];
        while (ptr)
        {
            hash_node_t *temp = ptr;
            ptr = ptr->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    free(table->array);
    free(table);
}

// Function to print the contents of the hash table
void print_table(hash_table_t* table) {
    printf("Hash Table Contents:\n");
    for (int i = 0; i < table->size; i++) {
        hash_node_t* ptr = table->array[i];
        if (ptr == NULL) {
            continue; // Skip empty buckets
        }
        printf("Bucket %d: ", i);
        while (ptr != NULL) {
            printf("(%s, %s) ", ptr->key, ptr->value);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main(void)
{
    hash_table_t *table = create_table(TABLE_SIZE);

    insert(table, "name", "mohamed");
    insert(table, "age", "21");
    insert(table, "location", "ALX");

    // Insert key-value pairs that hash to the same bucket
    insert(table, "apple", "red");
    insert(table, "banana", "yellow");
    insert(table, "cherry", "red");

    // Print the contents of the hash table
    print_table(table);

    // clean up and free memory
    free_table(table);

    return 0;
}