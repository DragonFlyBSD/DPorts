# Makefile for platon
#
# $FreeBSD: ports/biology/platon/files/Makefile,v 1.7 2012/11/17 05:54:52 svnexp Exp $

TARGET=	platon
OBJS=	platon.o xdrvr.o
FOPT=	${FFLAGS}
COPT=	${CFLAGS} -I%%LOCALBASE%%/include
LOPT=	-L%%LOCALBASE%%/lib -lX11

all:	${OBJS}
	${FC} -o ${TARGET} ${OBJS} ${LOPT}

platon.o:	platon.f
	${FC} ${FOPT} -c $<

xdrvr.o:	xdrvr.c
	${CC} ${COPT} -c $<

#f77 -o platon platon.f xdrvr.c -lX11
