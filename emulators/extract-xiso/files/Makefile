#
# $FreeBSD: ports/emulators/extract-xiso/files/Makefile,v 1.3 2012/11/17 05:57:20 svnexp Exp $
#

LIBFTP_DIR=libftp-5.0.1.modified.by.in
CFLAGS+=-D__FREEBSD__

extract-xiso: extract-xiso.c
	@${MAKE} libftp
	${CC} ${CFLAGS} ${PTHREAD_LIBS} -o extract-xiso extract-xiso.c ${LIBFTP_DIR}/libftp.a

libftp:
	@${MAKE} -C ${LIBFTP_DIR}

clean:
	@${MAKE} -C ${LIBFTP_DIR} clean
	@rm -f extract-xiso

all:   extract-xiso

dist:
	@${MAKE} clean
	@${MAKE}
