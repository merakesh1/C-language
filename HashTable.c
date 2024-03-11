#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// #define length 10

struct Node{
    char *key;
    int value;
    struct Node *next;
};

struct Hashtable{
    struct Node* table[10];
};

int hashFunction(char*);
void insert(struct Hashtable*,char*,int);
int search(struct Hashtable*,char*);

int hashFunction(char* key){
    /* printf("key is :%d\n",key);
    printf("key is :%d\n",key+1);
    printf("key is :%s\n",key); */

    /* char arr[]={'a','b','c'};
    printf("address of first element is :%d\n",arr);
    printf("address of second element is :%d\n",arr+1);
    printf("address of third element is :%d\n",arr+2);
    printf("element is :%c\n",arr[0]);
    printf("element is :%c\n",arr[1]);
    printf("element is :%c\n",arr[2]);
    printf("entire string is: %s\n",arr); */
    // int length=strlen(key);

    /* key="name"
    key[0]='n';
    key[1]='a';
    key[2]='m';
    key[3]='e';
    hash=417 */

    int hash=0;
    int i;
    
    for(i=0;i<4;i++){
        hash=hash+((int)key[i]);
    }
    return hash%10;
}

void insert(struct Hashtable* ht,char* key,int value){
    int index=hashFunction(key);

    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->key=key; 
    newNode->value=value;
    newNode->next=ht->table[index];

    ht->table[index]=newNode;
}

int search(struct Hashtable* ht,char* key){
    int index=hashFunction(key);
    struct Node* temp=ht->table[index];

    if(temp!=NULL){
        // printf("temp is: %d\n",temp);
        if(strcmp(temp->key,key)==0){
            printf("key is found at index: %d\n",index);
            return temp->value;
        }
    }

    return -1;
}


void main(){
    struct Hashtable ht;
    int i;
    for(i=0;i<10;i++){
        ht.table[i]=NULL;
    }
    
    // char arr[]={'n','a','m','e'};

    insert(&ht,"name",5);
    insert(&ht,"age",10);
    // insert(&ht,"eag",10);

    int res=search(&ht,"ages");
    if(res==-1){
        printf("key not found\n");
    } 

    for(i=0;i<10;i++){
        printf("%d\n",ht.table[i]);
    }

}