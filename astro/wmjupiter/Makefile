# New ports collection makefile for:	wmjupiter
# Date created:				Tue Jan 15 17:28:49 EST 2002
# Whom:					pat
#
# $FreeBSD: ports/astro/wmjupiter/Makefile,v 1.12 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	wmjupiter
PORTVERSION=	1.2
PORTREVISION=	3
CATEGORIES=	astro windowmaker
MASTER_SITES=	http://www.inxsoft.net/wmjupiter/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockapp that displays information on Jupiter

PLIST_FILES=	bin/wmJupiter
WRKSRC=		${WRKDIR}/wmJupiter
USE_XORG=	x11 xext xpm
USE_GMAKE=	yes

pre-patch:
	@${REINPLACE_CMD} -e 's|values.h|float.h|; s|MAXDOUBLE|DBL_MAX|g' \
		${WRKSRC}/wmJupiter.c

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/wmJupiter ${PREFIX}/bin

.include <bsd.port.mk>
