#include "database.h"
#include <stdio.h>

int main(void) {
  if (!init_sql()) {
    return 1;
  }
  printf("successfully init db\n");
  if (!deinit_sql()) {
    return 1;
  }
  printf("successfully deinit db\n");

  return 0;
}