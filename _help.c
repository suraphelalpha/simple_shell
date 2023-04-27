#include "shell.h"

/**
 * aux_help_env - Help information for the 'env' built-in command
 * Return: no return
 */
void aux_help_env(void)
{
	char *help = "env: env [option] [name=value] [command [args]]\n\t";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "Print the environment variables of the shell.\n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_setenv - Help information for the 'setenv' built-in command
 * Return: no return
 */
void aux_help_setenv(void)
{
	char *help = "setenv: setenv [name] [value]\n\t";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "Add a new environment variable or update an existing one.\n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_unsetenv - Help information for the 'unsetenv' built-in command
 * Return: no return
 */
void aux_help_unsetenv(void)
{
	char *help = "unsetenv: unsetenv [name]\n\t";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "Remove an environment variable.\n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_general - Help information for all built-in commands
 * Return: no return
 */
void aux_help_general(void)
{
	char *help = "^-^ bash, version 1.0(1)-release\n";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "These commands are defined internally. Type 'help' to see a list.\n";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "Type 'help [command]' to find out more about a specific command.\n\n";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "alias [name=['string']]\n";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "cd [-L|[-P [-e]] [-@]] [dir]\n";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "exit [n]\nenv [option] [name=value] [command [args]]\n";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "setenv [name] [value]\nunsetenv [name]\n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_exit - Help information for the 'exit' built-in command
 * Return: no return
 */
void aux_help_exit(void)
{
	char *help = "exit: exit [n]\n\t";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "Exit the shell with a status of N (default status is of the last command executed).\n";
	write(STDOUT_FILENO, help, _strlen(help));
}
