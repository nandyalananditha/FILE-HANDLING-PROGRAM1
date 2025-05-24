#include <stdio.h>

int main() {
    FILE *file;

    // 1. Creating and writing to the file
    file = fopen("text.txt", "w"); // "w" mode: write
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    fprintf(file, "Hello, this is the first line.\n");
    fprintf(file, "This is the second line.\n");
    fclose(file);
    printf("File written successfully.\n");

    // 2. Reading from the file
    file = fopen("text.txt", "r"); // "r" mode: read
    if (file == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    char ch;
    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    // 3. Appending to the file
    file = fopen("text.txt", "a"); // "a" mode: append
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(file, "This line is appended to the file.\n");
    fclose(file);

    // 4. Reading again to show updated content
    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    printf("\nUpdated contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}
