# Created by: erich@rrnet.com
# $FreeBSD: editors/xcoral/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xcoral ${PREFIX}/bin
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/SmacLib/* ${DATADIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
