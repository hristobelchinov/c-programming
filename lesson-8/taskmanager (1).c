#include "processes.h"
#include <stdio.h>
#include <string.h>

void printprocesses() {
  if (processcount == 0) {
    printf("No processes\n");
  } else {
    printf("processes:\n");
    for (int i = 0; i < processcount; i++) {
      printf("ID: %d, name: %s\n", processes[i].id, processes[i].name);
    }
  }
}

int main() {
  int choice;
  char name[MAX_NAME_LENGTH + 1];
  int id;

  while (1) {
    printf("\nTask Manager\n");
    printf("1. Create new process\n");
    printf("2. List all processes\n");
    printf("3. Stop a process\n");
    printf("4. Exit\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      if (processcount >= MAX_PROCESSES) {
        printf("Maximum number reached. Stop a process to create a new one.\n");
      } else {
        printf("Enter process name:");
        scanf("%s", name);
        int new_id = createnewprocess(name);
        if (new_id > 0) {
          printf("Process created\n");
        } else {
          printf("Failed to create process.\n");
        }
      }
      break;
    case 2:
      printprocesses();
      break;
    case 3:
      printf("Enter process ID to stop:");
      scanf("%d", &id);
      stopprocess(id);
      break;
    case 4:
      printf("Exiting Task Manager.\n");
      return 0;
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}