#
# $FreeBSD: archivers/squsq/files/Makefile 319452 2013-05-30 19:51:38Z antoine $
#

all: sq usq

sq: sq.o tr1.o tr2.o sqio.o
	${CC} ${CFLAGS} -o $@ $>

usq: usq.o utr.o
	${CC} ${CFLAGS} -o $@ $>
