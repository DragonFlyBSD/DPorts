# New ports collection makefile for:	x2x
# Date created:		3 September 2000
# Whom:			grog
#
# $FreeBSD: ports/x11-servers/x2x/Makefile,v 1.13 2012/11/17 06:03:30 svnexp Exp $
#

PORTNAME=	x2x
PORTVERSION=	1.27
PORTREVISION=	3
CATEGORIES=	x11-servers
MASTER_SITES=	http://cloud.github.com/downloads/dottedmag/x2x/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A program to link multiple X servers together

USE_IMAKE=	yes
USE_XORG=	x11 xext xtst
USE_GMAKE=	yes
MAKE_ENV=	MAKE=${GMAKE}
MAN1=		x2x.1
PLIST_FILES=	bin/x2x

.include <bsd.port.mk>
