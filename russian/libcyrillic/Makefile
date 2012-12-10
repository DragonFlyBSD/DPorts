# New ports collection makefile for:	libcyrillic
# Date created:				8 December 2003
# Whom:					Pavel Novikov
#
# $FreeBSD: ports/russian/libcyrillic/Makefile,v 1.5 2012/11/17 06:00:55 svnexp Exp $
#

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

.include <bsd.port.mk>
