#
# $FreeBSD: ports/archivers/squsq/files/Makefile,v 1.2 2012/11/17 05:54:23 svnexp Exp $
#

all: sq usq

sq: sq.o tr1.o tr2.o sqio.o
	${CC} -o $@ $>

usq: usq.o utr.o
	${CC} -o $@ $>
