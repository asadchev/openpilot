#!/usr/bin/python

import sys,re
fh = open(sys.argv[1])

def neg_to_signed(match):
  type = match.groups()[1]
  v = int(match.group().split("-")[1], 16)
  return "(%s*)" % type + hex((1<<32) - v)

for line in fh:
  line = line.rstrip()
  line = re.sub("(\((int32_t|char) \*\)-0x[0-9a-f]+)", neg_to_signed, line)
  print line
