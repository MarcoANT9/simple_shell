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

/** 0. Simple Shell data from echo */
void _echo_shell(char *argenv[]);

/** 1. Simple Shell with Prompt */
void _prompt_shell(char *argenv[]);

/** 2. Simple Shell without Prompt with argv */
void _args_shell(char *argv[], char *argenv[]);


#endif
