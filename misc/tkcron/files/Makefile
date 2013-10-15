#
# $FreeBSD: misc/tkcron/files/Makefile 300896 2012-07-14 13:54:48Z beat $
#

BINDIR=		${PREFIX}/bin
WISHDIR?=	${BINDIR}

all:		tkcron

tkcron:	
	cp tkcron.tcl tkcron

install:	all
	install ${COPY} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} tkcron ${BINDIR}

.include <bsd.own.mk>
