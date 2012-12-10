# New ports collection makefile for:	games/exhaust
# Date created:			7 Aug 2005
# Whom:				Alejandro Pulver <alejandro@varnet.biz>
#
# $FreeBSD: ports/games/exhaust/Makefile,v 1.5 2012/11/17 05:57:37 svnexp Exp $
#

PORTNAME=	exhaust
PORTVERSION=	1.9.2
CATEGORIES=	games
MASTER_SITES=	http://www.cs.helsinki.fi/u/jpihlaja/exhaust/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Redcode simulator easy to embed into applications

PLIST_FILES=	bin/${PORTNAME}

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

post-install:
	@${ECHO_CMD}
	@${CAT} ${PKGMESSAGE}
	@${ECHO_CMD}

.include <bsd.port.mk>
