# $FreeBSD: sysutils/xsysstats/Makefile 334050 2013-11-17 02:58:44Z vanilla $

PORTNAME=	xsysstats
PORTVERSION=	1.51
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	utilities
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	System information display tool

GNU_CONFIGURE=	yes
USES=		gmake
USE_XORG=	x11

ALL_TARGET=	xsysstats

PLIST_FILES=	bin/xsysstats man/man1/${PORTNAME}.1.gz

pre-patch:
	${RM} ${WRKSRC}/headers.h && ${TOUCH} ${WRKSRC}/headers.h

.include <bsd.port.mk>
