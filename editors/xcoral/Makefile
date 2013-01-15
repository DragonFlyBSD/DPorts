# New ports collection makefile for:    xcoral
# Date created:         1995/10/02
# Whom:                 erich@rrnet.com
#
# $FreeBSD: ports/editors/xcoral/Makefile,v 1.26 2012/11/17 05:57:19 svnexp Exp $
#

PORTNAME=	xcoral
PORTVERSION=	3.47
CATEGORIES=	editors
MASTER_SITES=	http://xcoral.free.fr/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A multiwindow mouse-based text editor for X

USE_XORG=	x11
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--libdir=${PREFIX}/share
MAKE_JOBS_UNSAFE=	yes

PLIST_SUB=	VERSION="${PORTVERSION}"

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xcoral ${PREFIX}/bin
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/SmacLib/* ${DATADIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
