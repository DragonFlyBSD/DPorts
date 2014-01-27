# Created by: Pavel Novikov
# $FreeBSD: russian/libcyrillic/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libcyrillic
PORTVERSION=	1.9
CATEGORIES=	russian converters textproc
MASTER_SITES=	http://ext.by/libcyrillic/
PKGNAMEPREFIX=
DISTNAME=	${PORTNAME:S/^lib//}-${PORTVERSION}

MAINTAINER=	pavel@ext.by
COMMENT=	Text manipulation and autodetection for 6 major Cyrillic charsets

MAKE_ENV=	WRKSRC="${WRKSRC}"
MAKEFILE=	${FILESDIR}/Makefile.bsd
USE_LDCONFIG=	yes

.if !defined(WITHOUT_OPTIMIZE)
CFLAGS+=	-O2
.endif

NO_STAGE=	yes
.include <bsd.port.mk>
