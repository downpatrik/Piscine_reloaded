#!/bin/sh
find . -name '*.sh' | sed 's/.\{3\}$//' | rev | cut -d'/' -f 1 | rev
