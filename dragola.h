#ifndef DRAGOLA_H
#define DRAGOLA_H

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>

/**========================================================================*/
/**-STRUCTURES-& DEFINITIONS-----------------------------------------------*/
/**========================================================================*/




/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/** 1. Simple Shell data from echo */
void _echo_shell(char *argenv[]);

/** 2. Simple Shell with Prompt */
void _prompt_shell(char *argenv[]);

/** 3. Simple Shell without Prompt with argv */
void _args_shell(char *argv[], char *argenv[]);

/** 4. Function decide if a command exits or not */
char *func_exits(char *argv[], char *argenv[]);

/** 5. Create the path */
char **find_path(char *argenv[]);

/** 6. Combinate command with the folder in which it is located. */
char *full_path(char *tokenpath[], char *command);






#endif
