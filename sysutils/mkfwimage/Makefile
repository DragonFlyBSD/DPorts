# Created by: Adrian Chadd <adrian@FreeBSD.org>
# $FreeBSD: sysutils/mkfwimage/Makefile 333624 2013-11-12 21:35:45Z bapt $

PORTNAME=	mkfwimage
DISTVERSION=	r1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/adrian
DISTNAME=	ubnt-${PORTNAME}-${DISTVERSION}

MAINTAINER=	adrian@FreeBSD.org
COMMENT=	Ubiquiti Embedded Board Image Generator

MAKE_ARGS+=	PREFIX=${STAGEDIR}${PREFIX}
PLIST_FILES=	bin/mkfwimage

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/mkfwimage

.include <bsd.port.mk>
