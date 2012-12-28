#
# $FreeBSD: ports/misc/tkcron/files/Makefile,v 1.9 2012/11/17 05:59:45 svnexp Exp $
#

BINDIR=		${PREFIX}/bin
WISHDIR?=	${BINDIR}

all:		tkcron

tkcron:	
	cp tkcron.tcl tkcron

install:	all
	install ${COPY} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} tkcron ${BINDIR}

.include <bsd.own.mk>
