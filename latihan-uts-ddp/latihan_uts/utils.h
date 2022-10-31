#pragma once
#include "models.h"
#include <stdbool.h>

/* prosedur utility yang akan menerima input string dari user */
void get_str(char *question, char *strDest);
void get_char(char *question, char *charDest);
void get_int(char *question, int *intDest);
bool parse_date(char *date_str, Date *date);