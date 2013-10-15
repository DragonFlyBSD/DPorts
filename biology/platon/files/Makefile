# Makefile for platon
#
# $FreeBSD: biology/platon/files/Makefile 300895 2012-07-14 12:56:14Z beat $

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
