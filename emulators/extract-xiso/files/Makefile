#
# $FreeBSD: emulators/extract-xiso/files/Makefile 340722 2014-01-22 17:00:46Z mat $
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
