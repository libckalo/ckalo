#!/bin/bash
srcdir=$(dirname "$0")
curdir=$(pwd)
cd "$srcdir"
${AUTORECONF:-autoreconf} -fiv
cd "$curdir"
[ -z "$NOCONFIGURE" ] && $srcdir/configure "$@"
