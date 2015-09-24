/*
 ============================================================================
 Name        : comp6281-ass1.c
 Author      : andriy samson
 Version     :
 Copyright   : comp6281/2 @andriy samsonyuk
 Description : Ass-1
 ============================================================================
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "avector.h"
#include "atests.h"

void print_main_menu() {
//	printf("value is: %s\n", array[0]);
	system("clear");
	printf("+++++++++++++++++++++++");
	printf("\nSys Admin Utility");
	printf("\n1. File Explorer");
	printf("\n2. Find and Replace");
	printf("\n3. Show the Log");
	printf("\n4. Exit");
	printf("\n+++++++++++++++++++++++\n");
}

void file_explorer_loop() {
	printf("\nYour enered into File Explorer loop...\n");
}

void find_replace_loop() {
	printf("\nYour enered into Find-Replace loop...\n");
}

void show_log() {
	printf("\nShow log action...\n");
}

int main(void) {

	// to run test cases, uncomment them
	//	test1_run();

	while (1) {
		print_main_menu();
		int userSelection;
		printf("Enter your selection: ");
		if (scanf("%d", &userSelection) != 1) {
			while (getchar() != '\n')
				;  // empty statement intentional
		} else {
			switch (userSelection) {
			case 1:
				file_explorer_loop();
				break;
			case 2:
				find_replace_loop();
				break;
			case 3:
				show_log();
				break;
			case 4:
				//aaa
				printf("\n.... Bye.\n");
				return EXIT_SUCCESS;
			default:
				printf("\nYour enered a wrong character, please try again\n");
			}
		}
	}
}
