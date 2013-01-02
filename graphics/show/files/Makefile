# $FreeBSD: ports/graphics/show/files/Makefile,v 1.4 2012/11/17 05:58:23 svnexp Exp $

CC        ?= gcc
CFLAGS    ?= -g -O2 -Wall
XROOT     = ${LOCALBASE}
LROOT	  = ${LOCALBASE}
INCLUDES  = -I$(XROOT)/include -I$(LROOT)/include
LIBS      = -lX11 -lXext -ljpeg -lpng -ltiff -lz -lgif -lm -lImlib
LDPATH    = -L$(XROOT)/lib -L$(LROOT)/lib

PROG      = show
PREFIX    = ${LOCALBASE}

all: $(PROG)

$(PROG): $(PROG).c
	$(CC) $(PROG).c $(CFLAGS) $(INCLUDES) $(LDPATH) $(LIBS) -o $(PROG)
