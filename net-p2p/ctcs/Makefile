# New ports collection makefile for:    ctcs
# Date created:                         7 July 2009
# Whom:                                 Dereckson <dereckson@gmail.com>
#
# $FreeBSD: ports/net-p2p/ctcs/Makefile,v 1.3 2012/11/17 06:00:39 svnexp Exp $
#

PORTNAME=	ctcs
PORTVERSION=	1.4.1
CATEGORIES=	net-p2p
MASTER_SITES=	SF/dtorrent/${PORTNAME}/${PORTVERSION}

MAINTAINER=	dereckson@gmail.com
COMMENT=	CTorrent monitoring and managing interface

NO_BUILD=	#
USE_PERL5_RUN=	yes
PLIST_FILES=	bin/ctcs share/doc/ctcs/readme.txt
PLIST_DIRS=	share/doc/ctcs
WRKSRC=		${WRKDIR}/ctcs-${PORTVERSION}

do-install:
	${INSTALL} -o ${SHAREOWN} -g ${SHAREGRP} -m 0755 \
	${WRKSRC}/ctcs ${PREFIX}/bin/ctcs
	${MKDIR} ${PREFIX}/share/doc/ctcs
	${INSTALL} -o ${SHAREOWN} -g ${SHAREGRP} -m 0644 \
	${WRKSRC}/readme.txt ${PREFIX}/share/doc/ctcs/readme.txt

.include <bsd.port.mk>
