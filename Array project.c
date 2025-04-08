#include<stdio.h>

int arr[200]={10,20,25,30,35,40,50,55,60,65};
int size = 10;

void insert() {
    if (size >= arr) {
        printf("Array is full!\n");
        return;
    }
    int pos,value,i;
    printf("Enter insert which position: ");
    scanf("%d", &pos);
    printf("Enter the new value: ");
    scanf("%d", &value);
    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos-1] = value;
    for (i=0;i<size+1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("Data inserted successfully!\n");
}

void update() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    int pos, value,i;
    printf("Enter position to update: ");
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &value);
    arr[pos] = value;
    printf("%d",arr[i+1]);
    printf("Data updated successfully!\n");
}

void delete() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    int pos,i;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (i=pos-1;i<=size-2;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=0;
    for (int i = 0; i < size; i++) {
        printf("%d",arr[i]);
    }

    printf("Data deleted successfully!\n");
}

void display() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void search() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    int value,pos =-1,i;
    printf("Enter value to search: ");
    scanf("%d", &value);
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            pos=i+1;
            break;
        }
    }
    if (pos==-1) {
        printf("Value not found!\n");
    }
    else{
        printf("the value is found at %d",pos);
    }
}

void sort() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted successfully!\n");
}

int main() {
    int choice;
    do {
        printf("\n1. Insert\n2. Update\n3. Delete\n4. Display\n5. Search\n6. Sort\n7. Exit\n");
        printf("Enter operation number: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                insert();
                break;
            case 2:
                update();
                break;
            case 3:
                delete();
                break;
            case 4:
                display();
                break;
            case 5:
                search();
                break;
            case 6:
                sort();
                break;
            case 7:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid operation!\n");
        }
    } while (choice != 7);

    return 0;
}
