# $FreeBSD: ports/x11/xnodecor/files/Makefile,v 1.3 2012/11/17 06:03:22 svnexp Exp $
CFLAGS=		-I${LOCALBASE}/include
LDFLAGS=	-L${LOCALBASE}/lib
LIBS=		-lX11

all:	xnodecor

xnodecor:
	$(CC) -o xnodecor xnodecor.c $(CFLAGS) $(LDFLAGS) $(LIBS)

install:
	${BSD_INSTALL_PROGRAM} xnodecor ${LOCALBASE}/bin

clean:
	rm -f *.rej a.out core xnodecor
