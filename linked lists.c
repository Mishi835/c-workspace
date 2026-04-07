#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node *next;
};


int main() {

struct Node* head=NULL;
struct Node* temp=NULL;
struct Node* current=NULL;

   
    for (int i = 0; i <= 5; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->num = i;
        temp->next = NULL;
        if (head == NULL) {
            head = current = temp;
        }
        else {
            current->next = temp;
            current = temp;
        }
    }

    printf("Enter a position: ");
    int position;
    scanf("%d", &position); 

    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->num = 90;

    if (position == 1) {
        temp->next = head;
        head = temp;
    } else {
        current = head;
        for (int i = 0; i < position - 2; i++) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }

   
    current = head; 
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->next;
    }

    return 0;
}





// int main(){
//     struct Node
// {
//     int num;
//     struct Node * next;
// };
// struct Node* head=NULL;
// struct Node* temp=NULL;
// struct Node* current=NULL;
// for(int i =0; i<5; i++){
//     temp=(struct Node*)malloc(sizeof(struct Node));
//     temp -> num= i;
//     temp -> next = NULL;
//     if(head==NULL){

//         head = temp;
//         current=head;
//     }
//     else{
//         current->next=temp;
//         current=temp;
//     }
// }
//     current=head;
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     temp=(struct Node*)malloc(sizeof(struct Node));
//     temp->num =5;
//     temp->next=NULL;
//     current->next=temp;

//     printf("Enter a position: ");

//     int position=scanf("%d", &position);
//     current=head;
//     temp=(struct Node*)malloc(sizeof(struct Node));
//     temp->num =90;
//     temp->next=NULL;
//     for (int i=0; i<position-2;i++){
//         current=current->next;
//     }
// temp->next=current->next;
// current->next=temp;
   
// for (int i=0; i<6; i++){
//         printf("%d ", current->num);
//         current=current->next;
// }
    
// }
