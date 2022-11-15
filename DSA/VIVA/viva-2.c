#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct Person {
    int age;
    char name[20];
    char place[20];
    struct Person* next;
};

struct Person* head = NULL;

struct Person* createPerson() {
    char name[20],place[20];
    int age;

    struct Person* newPerson = (struct Person*)malloc(sizeof(struct Person)); 
    printf("Enter name of the person : ");
    scanf(" ");
    fgets(name, 20, stdin);
    printf("Enter place of the person : ");
    scanf("%s",place);
    printf("Enter age of the person : ");
    scanf("%d",&age);

    newPerson->age = age;
    strcpy(newPerson->name, name);
    strcpy(newPerson->place, place);
    newPerson->next = NULL;

    return newPerson;

}

void createLinkedList(int n) {
    struct Person* newPerson = createPerson();
    head = newPerson;

    struct Person* ptr = head;

    for (int i = 2; i <= n; i++)
    {
        struct Person* newPerson = createPerson();
        ptr->next = newPerson;
        ptr=ptr->next;
    }
    
}   

void display() {

    struct Person* ptr = head;

    printf("\n---------\n");
    printf("\nThe list is as show below\n");
    while (ptr!=NULL)
    {
        printf("Name : %s",ptr->name);
        printf("Place : %s\n",ptr->place);
        printf("Age : %d\n",ptr->age);

        ptr=ptr->next;

        printf("\n---------\n");

    }
    
}

void insertBeg() {
    struct Person* newPerson = createPerson();

    newPerson->next = head;
    head = newPerson;
}

void insertEnd() {
    struct Person* newPerson = createPerson();

    struct Person* ptr = head;
    while (ptr->next!= NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newPerson;
}

void deleteBeg() {
    struct Person* ptr = head;

    head = ptr->next;
    free(ptr);
}

void deleteEnd() {
    struct Person* ptr = head;
    struct Person* prev = head;

    while (ptr->next!= NULL)
    {  
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = NULL;
    free(ptr);
}


void replaceDelhi() {


    struct Person* ptr = head;
    char* str1 = "delhi";    
    char* str2;
    int result;

    while (ptr!=NULL)
    {   
        str2 = ptr->place;
        result = strcmp(str1, str2);
  
       if (result == 0)
       {
            strcpy(ptr->place, "new delhi");
            ptr->age = 20;
       }
        
        ptr = ptr->next;
    }
    
}

void deleteAt(int index) {
    struct Person* ptr = head;

    struct Person* prev = head;
    for (int i = 1; i < index; i++)
    {   
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = ptr->next;
    ptr->next = NULL;

    free(ptr);
    
} 

void filter() {
    struct Person* ptr = head;
    int index = 1;
    while (ptr!=NULL)
    {
        if (ptr->age > 90)
        {
            deleteAt(index);
        }
        index++;
        ptr = ptr->next;   
    }
    
}


int main() {

    int choice = 1;
    int checkInput;

    while (choice != 0)
    {

        printf("\n\n--------Please select an option---------");
        printf("\n1. Create list");
        printf("\n2. Insert at beginning");
        printf("\n3. Insert at end");
        printf("\n4. Delete from beginning");
        printf("\n5. Delete from end");
        printf("\n6. Replace delhi -> new delhi (case sensitive)");
        printf("\n7. Delete people above 90 age");
        printf("\n8. Display");



        printf("\n----------------------------------------");
        printf("\n0. Exit");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nENTER A VALID INPUT!! NO ALPHABETS ALLOWED!!");
            printf("\nEXITING");
            exit(1);
        }

        switch (choice)
        {
        case 0:
            printf("\n-----------------\n");
            printf("Exiting....");
            exit(1);
            break;
        case 1:
            printf("\n-----------------\n");
            int n;
            printf("\nEnter number of nodes required : ");
            scanf("%d",&n);
            createLinkedList(n);
            break;
        case 2:
            printf("\n-----------------\n");
            insertBeg();
            break;
        case 3:
            printf("\n-----------------\n");
            insertEnd();
            break;
        case 4:
            printf("\n-----------------\n");
            deleteBeg();
            break;
        case 5:
            printf("\n-----------------\n");
            deleteEnd();
            break;
        case 6:
            printf("\n-----------------\n");
            replaceDelhi();
            break;
        case 7:
            printf("\n-----------------\n");
            filter();
            break;
        case 8:
            printf("\n-----------------\n");
            display();
            break;
            
        default:
            printf("Something went wrong!");
            printf("\n-----------------\n");
        }

        printf("\nPress any key to continue..... ");
        getch();
    }


return 0;
}
