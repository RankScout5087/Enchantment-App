#pragma once

#include <sqlite3.h>
#include <stdbool.h>

extern sqlite3* db;

bool init_sql(void);
bool deinit_sql(void);