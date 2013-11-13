# $FreeBSD: x11/xnodecor/files/Makefile 333051 2013-11-07 02:04:11Z danilo $
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
