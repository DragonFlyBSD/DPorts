# $FreeBSD: x11/xnodecor/files/Makefile 300897 2012-07-14 14:29:18Z beat $
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
