# $FreeBSD: converters/chmview/files/Makefile 300895 2012-07-14 12:56:14Z beat $

BINDIR?=	${PREFIX}/bin

CFLAGS+=	-DUNIX -I${LOCALBASE}/include
LDADD+=		-L${LOCALBASE}/lib -lchm

WARNS?=		6

NO_MAN=		yes

PROG=		chmview

SRCS=		chmview.c utf8.h utf8.c

.include <bsd.prog.mk>
