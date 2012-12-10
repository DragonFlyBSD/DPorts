# $FreeBSD: ports/devel/libshhopt/files/Makefile,v 1.4 2012/11/17 05:55:56 svnexp Exp $

PREFIX	= /usr/local
LIBDIR	= $(PREFIX)/lib
INCSDIR	= $(PREFIX)/include
INCDIR	= $(INCSDIR)		# for 4.x bsd.lib.mk

example:
	$(CC) -o example example.c -I$(INCDIR) -L$(LIBDIR) -lshhopt
