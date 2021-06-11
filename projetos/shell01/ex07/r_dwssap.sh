#!/bin/sh
cat /etc/passwd | grep -v "#" | sed -n 2~2p | cut -f 1 -d ':' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed s/,$/./ | tr '\n' ',' 