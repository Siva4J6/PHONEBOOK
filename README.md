# PHONEBOOK APP
A menu-driven phone book application written in **C**. It uses a **singly linked list** to manage contacts and **file handling** to save contacts to `record.txt` so they can be loaded again when the application starts.

## Features
- Create a new contact with a name and roll/ID.
- Store up to five phone numbers for a contact.
- Store an email address and a postal address.
- Display all saved contacts.
- Search for a contact by name.
- Edit an existing contact's details.
- Delete a contact.
- Save contacts to a file and load them when the program starts.
- Save automatically when quitting through the menu.

## Technologies Used
- C programming language
- Singly linked list
- File handling (`fread`, `fwrite`)
- GCC compiler
- Makefile for building the project

## Project Files

| File | Purpose |
|---|---|
| `main.c` | Main program loop and menu |
| `header.h` | Contact structure, headers, and function declarations |
| `insert.c` | Creates and adds contacts |
| `print.c` | Displays all contacts |
| `find.c` | Searches for a contact by name |
| `edit.c` | Updates an existing contact |
| `delete.c` | Deletes a contact |
| `save_sync_sll.c` | Saves contacts to `record.txt` and loads them at startup |
| `record.txt` | Binary data file used to store contacts |
| `Makefile` | Compiles the source files into the application |

## Requirements
- GCC
- `make`
- A Linux or compatible Unix-like environment

> **Note:** The code uses `stdio_ext.h` and `__fpurge()`, which are GNU/Linux-specific. It may need changes to compile on other operating systems.

## Build and Run
1. Place all project source files and the `Makefile` in the same folder.
2. Open a terminal in that folder.
3. Compile the application:

   ```bash
   make
   ```

4. Run it:

   ```bash
   ./phonebook
   ```

5. To remove the generated object files and executable:

   ```bash
   make clean
   ```

## Menu Options

| Option | Action |
|---|---|
| `C` / `c` | Create a contact |
| `P` / `p` | Print all contacts |
| `F` / `f` | Find a contact by name |
| `E` / `e` | Edit a contact |
| `D` / `d` | Delete a contact |
| `S` / `s` | Save contacts to `record.txt` |
| `Q` / `q` | Save contacts and quit |

Options are case-insensitive.

## Data Storage

Contacts are stored in a singly linked list while the program is running. Choosing **Save** writes the contact records to `record.txt`. On startup, the program attempts to load contacts from that file.

Keep `record.txt` in the same working directory as the executable. The file stores binary records, so it is not intended to be edited manually.

## Learning Objectives

This project demonstrates:
- Structures and pointers in C
- Dynamic memory allocation
- Singly linked list operations
- Modular programming with header and source files
- File input/output
- Building a multi-file C project with a Makefile

## Future Improvements
- Validate phone numbers and email addresses.
- Support multiple email addresses and addresses containing spaces.
- Improve input handling and error checking.
- Fix and test edge cases in contact loading, searching, editing, and saving.
- Add safer, portable input handling.
 
  Conclusion
The Phone Book App is a C programming project that efficiently manages contact information using a singly linked list and file handling. It allows users to create, display, search, edit, and delete contacts through a simple menu-driven interface. The application also provides functionality to save contact details in a file and load them when the program starts, helping maintain data between sessions.
This project helps develop practical knowledge of C programming concepts such as structures, pointers, dynamic memory allocation, linked lists, and file operations. Overall, the Phone Book App demonstrates how data structures and file handling can be combined to build a simple and useful contact management system.
