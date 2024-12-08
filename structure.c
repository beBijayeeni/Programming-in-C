#include <stdio.h>
//#include <string.h>

// Define a structure to store student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    
    // Ask the user how many students to store
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of structures
    struct Student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Name: ");
        scanf("%s",students[i].name);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}

