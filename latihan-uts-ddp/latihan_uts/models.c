#include <stdbool.h>
#include "models.h"

// inisialisasi database
Motor db_motor[] = {
  {"Revo FI 110", 30, 12500}, {"New Supra X 125 FI", 30, 18500}, 
  {"New Beat FI", 20, 12000}, {"Vega ZR", 10, 13500}, {"Jupiter Z", 20, 14000}, 
  {"Jupiter MX", 15, 17000}, {"Satria FU 150", 10, 19500}, {"Shogun R 125", 5, 14000}
}; // database motor

Pembeli db_pembeli[200]; //variable untuk menyimpan pembeli
int curr_pembeli_idx = 0;
