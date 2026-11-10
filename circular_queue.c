#include <stdio.h>

#define MAXSIZE 10
int cqueue[MAXSIZE];
int rear = -1, front = -1;

void insert();
void delete1();
void display();

int main() {
    int choice;
    do {
        printf("\n-----------Circular Queue Menu--------");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: delete1(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}

void insert() {
    int n;
    if ((rear + 1) % MAXSIZE == front)
        printf("\nQueue is full (overflow)");
    else {
        printf("Enter an element: ");
        scanf("%d", &n);  // ✅ fixed — added &

        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAXSIZE;
        }

        cqueue[rear] = n;
        printf("\nInserted %d", n);
    }
}

void display() {
    int i;
    if (front == -1 && rear == -1) {
        printf("\nQueue is empty");
    } else {
        printf("\nElements of queue: ");
        for (i = front; i != rear; i = (i + 1) % MAXSIZE) {
            printf("%d ", cqueue[i]);
        }
        printf("%d", cqueue[i]); // print last element
    }
}

void delete1() {
    int n;
    if (front == -1 && rear == -1) {
        printf("\nQueue is empty");
    } else {
        n = cqueue[front];
        printf("\nDeleted element is %d", n);

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAXSIZE;
        }
    }
}
