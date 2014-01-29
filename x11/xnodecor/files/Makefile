# $FreeBSD: x11/xnodecor/files/Makefile 340722 2014-01-22 17:00:46Z mat $
CFLAGS=		-I${LOCALBASE}/include
LDFLAGS=	-L${LOCALBASE}/lib
LIBS=		-lX11

all:	xnodecor

xnodecor:
	$(CC) -o xnodecor xnodecor.c $(CFLAGS) $(LDFLAGS) $(LIBS)

install:
	${BSD_INSTALL_PROGRAM} xnodecor ${DESTDIR}${PREFIX}/bin

clean:
	rm -f *.rej a.out core xnodecor
