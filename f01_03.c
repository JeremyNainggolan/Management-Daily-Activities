/*
 * 12S22002 - Jeremy Mart Valentino Nainggolan
 */

#include "./libs/todo.h"
#include "./libs/repository.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int _argc, char **_argv) {
    char command[100];
    unsigned short id = 1; 
    unsigned short size = 0;
    unsigned short temp_size = 0;
    bool loop = true;
    struct activity_t *activity = malloc(10 * sizeof(struct activity_t));

    FILE *file_activity;
    file_activity = fopen("./storage/todo-repository.txt", "r");

    char activity_content[100];

    if (file_activity != NULL)
    {
        read_repository(activity, size, id);

        while (fgets(activity_content, 100, file_activity))
        {
            size++;
            id++;
            temp_size++;
        }  
    }

    fclose(file_activity);

    file_activity = fopen("./storage/todo-repository.txt", "a");

    while (loop == true)
    {
        command[0] = '\0';
        short k = 0;
        while (1 == 1)
        {
            char i = getchar();
            if (i == '\n')
            {
                break;
            }
            
            if (i == '\r')
            {
                continue;
            }
            
            command[k] = i;
            command[++k] = '\0';
        }
        
        char *token_act = strtok(command, "#");

        if (strcmp(token_act, "todo-add") == 0)
        {
            todo_add(activity, command, size, id);
            write_repository(activity, temp_size, size);
            size++;
            id++;
            temp_size++;
        }

        if (strcmp(token_act, "todo-status") == 0)
        {   
            token_act = strtok(NULL, "#");
            unsigned short index = atoi(token_act);
            char *stat = strtok(NULL, "#");

            todo_status(activity, stat, index, size);
        }
        
        if (strcmp(token_act, "todo-print-all") == 0)
        {
            todo_print_all(activity, size);
        }
        
        if (strcmp(token_act, "---") == 0)
        {
            loop = false;
        }       

    }

    fclose(file_activity);
    free(activity);
    
    return 0;
}
