# New ports collection makefile for:   libXau
# Date Created:			29 Oct, 2003
# Whom:				Eric Anholt <anholt@FreeBSD.org>
#
# $FreeBSD: ports/x11/libXau/Makefile,v 1.21 2012/11/17 06:03:17 svnexp Exp $
#

PORTNAME=	libXau
PORTVERSION=	1.0.6
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Authentication Protocol library for X11

XORG_CAT=	lib
USE_XORG=	xproto:both

MAN3=		Xau.3 XauDisposeAuth.3 XauFileName.3 XauGetAuthByAddr.3 \
		XauGetBestAuthByAddr.3 XauLockAuth.3 XauReadAuth.3 \
		XauUnlockAuth.3 XauWriteAuth.3

post-install:
	${LN} -sf ${PREFIX}/lib/libXau.so.6 ${PREFIX}/lib/libXau.so.0

.include <bsd.port.mk>
