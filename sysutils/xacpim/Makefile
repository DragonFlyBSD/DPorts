# New ports collection makefile for:	xacpim
# Date created:				25 April 2004
# Whom:					henriknj@0xmilk.org
#
# $FreeBSD: ports/sysutils/xacpim/Makefile,v 1.6 2012/11/17 06:01:50 svnexp Exp $

PORTNAME=	xacpim
PORTVERSION=	0.1.1
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://shapeshifter.se/pub/xacpim/

MAINTAINER=	henriknj@0xmilk.org
COMMENT=	Utility to display battery status and temperature on the root-display

USE_XORG=	x11
PLIST_FILES=	bin/xacpim

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/xacpim ${PREFIX}/bin/xacpim

.include <bsd.port.mk>
