#!/bin/bash

# compile

gcc -Wall -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# create lib

ar -cr liball.a *.o
