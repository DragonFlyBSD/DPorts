# New ports collection makefile for:	boclient
# Date created:		12 August 1998
# Whom:			darius@dons.net.au
#
# $FreeBSD: ports/net/boclient/Makefile,v 1.12 2012/11/17 05:59:57 svnexp Exp $
#

PORTNAME=	boclient
PORTVERSION=	1.21
CATEGORIES=	net security
MASTER_SITES=	http://www.cultdeadcow.com/tools/
DISTNAME=	bo121unix

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Client program for the Back Orifice Windows program

PLIST_FILES=	bin/bounix
WRKSRC=		${WRKDIR}/bo
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/Makefile.in

post-install:
		${STRIP_CMD} ${PREFIX}/bin/bounix

.include <bsd.port.mk>
