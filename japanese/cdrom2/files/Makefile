# $FreeBSD: ports/japanese/cdrom2/files/Makefile,v 1.3 2012/11/17 05:58:31 svnexp Exp $
#

# Installation prefix:
PREFIX?=/usr/local
BINDIR=${PREFIX}/bin
LIBDIR=${PREFIX}/lib/cdrom2
PROGRAMS=cdrom2 cdgaiji
TBL_FILES=kojien3.tbl ruigo.tbl 

all: ${PROGRAMS}

cdrom2: cdrom2.c
	cc -DUNIX -O -o cdrom2 cdrom2.c

cdgaiji: cdgaiji.c
	cc -DUNIX -O -o cdgaiji cdgaiji.c

install:
	for f in ${PROGRAMS} ; do \
	  /usr/bin/install -c -s -o bin -g bin -m 755 $$f ${BINDIR} ;\
	done
	/bin/mkdir -p ${LIBDIR}
	for f in ${TBL_FILES} ; do \
	  /usr/bin/install -c -o bin -g bin -m 644 $$f ${LIBDIR} ;\
	done	

clean:
	rm -f ${PROGRAMS}
