#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 10

struct Node
{
    char *key;
    char *meaning;
    struct Node *next;
};

struct Dictionary
{
    struct Node *table[SIZE];
};

int hashFunction(char* key){
    int i;
    int index=0;
    for(i=0;i<strlen(key);i++){
        index=index+key[i];
    }
    return index%SIZE;
}

void insert(struct Dictionary* ht,char* key,char* meaning){
    int index=hashFunction(key);
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->key=strdup(key);
    newNode->meaning=meaning;
    newNode->next=NULL;

    if(ht->table[index]==NULL){
        ht->table[index]=newNode;
    }
    else{
        newNode->next=ht->table[index];
        ht->table[index]=newNode;
    }
}

int search(struct Dictionary* ht,char* key){
    int index=hashFunction(key);
    struct Node* temp=ht->table[index];
    while(temp!=NULL){
        printf("temp is: %s\n",temp->key);
        if(strcmp(temp->key,key)==0){
            printf("key is found at index: %d\n",index);
            return 1;
        }
        temp=temp->next;
    }
    return -1;
}

void delete(struct Dictionary* ht,char* key){
    int index=hashFunction(key);
    struct Node* temp=ht->table[index];
    struct Node* prev=NULL;

    while(temp!=NULL){
        if(strcmp(temp->key,key)==0){
            if(prev==NULL){
                ht->table[index]=temp->next;
            }
            else{
                prev->next=temp->next;
            }
            free(temp);
            printf("key is deleted at index: %d\n",index);
            return;
        }
        prev=temp;
        temp=temp->next;
    }

    printf("key is not found\n");
}

void main(){
    struct Dictionary ht;
    int i;
    for(i=0;i<SIZE;i++){
        ht.table[i]=NULL;
    }

    insert(&ht,"phil","love");
    insert(&ht,"bal","bal");
    insert(&ht,"lab","lab");
    insert(&ht,"alb","alb");

    for(i=0;i<SIZE;i++){
        printf("index %d is: %s\n",i,ht.table[i]);
    }

    int res=search(&ht,"phil");
    if(res==-1){
        printf("key is not found\n");
    }
    res=search(&ht,"bal");
    if(res==-1){
        printf("key is not found\n");
    }
    res=search(&ht,"lab");
    if(res==-1){
        printf("key is not found\n");
    }
    res=search(&ht,"alb");
    if(res==-1){
        printf("key is not found\n");
    }
    res=search(&ht,"ball");
    if(res==-1){
        printf("key is not found\n");
    }
    delete(&ht,"bal");
    res=search(&ht,"bal");
    if(res==-1){
        printf("key is not found\n");
    }
}





