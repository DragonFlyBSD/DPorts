# New ports collection makefile for:	mkfontscale
# Date Created:				28 Aug 2005
# Whom:					Pawel Worach
#
# $FreeBSD: ports/x11-fonts/mkfontscale/Makefile,v 1.6 2012/11/17 06:03:29 svnexp Exp $
#

PORTNAME=	mkfontscale
PORTVERSION=	1.0.9
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Creates an index of scalable font files for X

LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

XORG_CAT=	app
USE_XORG=	xproto fontenc

PLIST_FILES=	bin/mkfontscale
MAN1=		mkfontscale.1

.include <bsd.port.mk>
