#ifndef DRAGOLA_H
#define DRAGOLA_H

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
#include <errno.h>

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

/** A. Interpreter */
char **_interpreter(char *buff);

/** 3. Function put the PATH */
char *func_put_path(char *command, char *argenv[]);

/** 4. Create the path */
char **find_path(char *argenv[]);

/** 5. Combinate command with the folder in which it is located. */
char *full_path(char *tokenpath[], char *command);

#endif
