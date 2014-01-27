#
# $FreeBSD: archivers/squsq/files/Makefile 340722 2014-01-22 17:00:46Z mat $
#

all: sq usq

sq: sq.o tr1.o tr2.o sqio.o
	${CC} ${CFLAGS} -o $@ $>

usq: usq.o utr.o
	${CC} ${CFLAGS} -o $@ $>
