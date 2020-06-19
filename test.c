#include <stdio.h>
#include <string.h>

#include "asymmetric-diffie-hellman.h"

#ifndef NULL
#define NULL ((void*)0)
#endif

#define T_RED "\e[31m"
#define T_LIME "\e[32m"
#define T_NORMAL "\e[00m"
#define ASSERT(M,c) (printf(((err|=!(c),(c)) ? (T_LIME " PASS " T_NORMAL " %s\n") : (T_RED " FAIL " T_NORMAL " %s\n")),M))

int main() {
  int err = 0;

  printf("# Pre-loaded request\n");
  ASSERT("Assert works", 1 == 1);

  // TODO: test all methods

  return err;
}
