#pragma once
#include "models.h"

// deklarasi prosedur dan fungsi tampilan
void menu_utama(int *menu_input);
void menu_tambah_pembeli(long long *modal, long long *profit);
void menu_lihat_db_motor(long long modal, long long profit);
void menu_lihat_db_pembeli();
void print_pembeli(Pembeli *pembeli);