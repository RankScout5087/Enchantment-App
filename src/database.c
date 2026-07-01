#include "database.h"
#include <stddef.h>

sqlite3* db = NULL;


bool init_sql(void) {
  int rc = sqlite3_open("test.db", &db);
  if (rc != SQLITE_OK) {
    return false;
  }
  rc = sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT)", NULL, NULL, NULL);
  if (rc != SQLITE_OK) {
    sqlite3_close(db);
    db = NULL;
    return false;
  }
  return true;
}

bool deinit_sql(void) {
  if (db) {
    sqlite3_close(db);
    db = NULL;
  }
  return true;
}