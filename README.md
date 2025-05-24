# FILE-HANDLING-PROGRAM1

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: NANDYALA NANDITHA

*INTERN ID*: CT04DN872

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH KUMAR

OVERVIEW OF THE PROJECT:

Project Title:

File Handling Operations in C – Creation, Reading, Writing, and Appending to Text Files

Project Overview:

This project presents a simple yet comprehensive implementation of file handling concepts in the C programming language. File handling is a core component of system-level programming and is crucial for data storage, retrieval, and manipulation. The main objective of this project is to demonstrate how to perform four essential operations on files—**creating, writing, reading, and appending**—through a structured C program.

In this program, we use a `.txt` file named `text.txt` to show how data can be stored permanently and modified over time. The project follows a step-by-step approach to first create a file and write initial content, then read and display this content, append new data to the file, and finally re-read the file to show the updated contents. It serves as a practical demonstration of the use of file input/output (I/O) operations in C, employing functions such as `fopen()`, `fprintf()`, `fgetc()`, and `fclose()`.

Key Functionalities:

1. File Creation and Writing:

The program starts by creating a new file named `text.txt` using the `"w"` (write) mode. If the file already exists, this mode overwrites the existing content. If the file doesn’t exist, it will be created. The `fprintf()` function is used to write two lines of text to the file. This segment teaches how to handle file creation and how to write formatted output to a file in C.

2.File Reading:

Once the data is written, the file is reopened in `"r"` (read) mode. It is then read character-by-character using the `fgetc()` function, and the contents are displayed on the screen using `putchar()`. This section is vital for understanding how to retrieve data from a file and display it using standard output functions.

3.Appending Data:

After displaying the original content, the file is reopened in `"a"` (append) mode. This mode allows the program to add new data to the end of the file without deleting the existing content. A new line is appended using `fprintf()`. This operation demonstrates how existing files can be updated with new content while preserving previous data.

4.Re-reading Updated File Content:

To confirm that the append operation was successful, the program opens the file again in `"r"` mode and displays the full content including the newly added line. This final step verifies that all previous operations have been executed correctly.

Learning Objectives:

* Understand different file modes in C: `"r"`, `"w"`, and `"a"`.
* Learn how to open and close files using `fopen()` and `fclose()`.
* Use `fprintf()` for writing formatted text and `fgetc()` for reading character-by-character.
* Handle file I/O errors by checking if the file pointer is `NULL`.
* Apply standard input/output functions to manage persistent data storage.

Conclusion:

This project provides a hands-on experience with file handling in C, demonstrating how to manage text files using various modes. It emphasizes the importance of error handling and step-by-step validation, which are critical in real-world systems where file operations may fail due to missing permissions, incorrect paths, or corrupted files.

By combining writing, reading, and appending operations in a single application, this program offers a holistic view of how files are used in everyday software and helps build a solid foundation for further exploration into file I/O in C and other programming languages.
