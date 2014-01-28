# $FreeBSD: converters/chmview/files/Makefile 340722 2014-01-22 17:00:46Z mat $

BINDIR?=	${PREFIX}/bin

CFLAGS+=	-DUNIX -I${LOCALBASE}/include
LDADD+=		-L${LOCALBASE}/lib -lchm

WARNS?=		6

NO_MAN=		yes

PROG=		chmview

SRCS=		chmview.c utf8.h utf8.c

.include <bsd.prog.mk>
