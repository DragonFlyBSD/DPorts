# $FreeBSD: ports/comms/predict/files/Makefile,v 1.3 2012/11/17 05:55:01 svnexp Exp $

.ifndef	CC
CC	= 	-cc
.endif
.ifndef CPPFLAGS
CPPFLAGS =
.endif
.ifndef	CFLAGS
CFLAGS	=	-O2
.endif

default:	all
all:		predict vocalizer/vocalizer

LIBS += -lm -lncurses
predict:	predict.c predict.h
		${CC} ${CFLAGS} -o predict predict.c ${LIBS}

vocalizer/vocalizer:	vocalizer/vocalizer.c vocalizer/vocalizer.h	
		${CC} ${CFLAGS} -o vocalizer/vocalizer vocalizer/vocalizer.c ${LIBS}

clean:
	rm -f *.o predict *core *~ \#* *.txt vocalizer/vocalizer

install:
	mkdir -p ${PREFIX}/share/predict/
	mkdir ${PREFIX}/share/predict/default
	mkdir ${PREFIX}/share/predict/vocalizer
	cp default/predict.db ${PREFIX}/share/predict/default
	cp default/predict.qth ${PREFIX}/share/predict/default
	cp default/predict.tle ${PREFIX}/share/predict/default
	cp vocalizer/*.wav ${PREFIX}/share/predict/vocalizer
	install	predict ${PREFIX}/bin
	install vocalizer/vocalizer ${PREFIX}/bin

install.man:
	install docs/man/predict.1 ${PREFIX}/man/man1

.PHONY:	clean build
