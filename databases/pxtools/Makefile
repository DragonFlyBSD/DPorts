# New ports collection makefile for:	pxtools
# Date created:				27 November 1999
# Whom:					Chris D. Faulhaber <jedgar@FreeBSD.org>
#
# $FreeBSD: ports/databases/pxtools/Makefile,v 1.25 2012/11/17 05:55:21 svnexp Exp $
#

PORTNAME=	pxtools
PORTVERSION=	0.0.20
PORTREVISION=	3
CATEGORIES=	databases
MASTER_SITES=	http://jan.kneschke.de/assets/2007/2/16/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Collection of tools to work with Paradox databases

GNU_CONFIGURE=	yes
USE_GETTEXT=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} -e 's|-O2|${CFLAGS}|' \
		${WRKSRC}/configure ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
