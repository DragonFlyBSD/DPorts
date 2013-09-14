# Created by: Dereckson <dereckson@gmail.com>
# $FreeBSD: net-p2p/ctcs/Makefile 326954 2013-09-11 08:15:53Z az $

PORTNAME=	ctcs
PORTVERSION=	1.4.1
CATEGORIES=	net-p2p
MASTER_SITES=	SF/dtorrent/${PORTNAME}/${PORTVERSION}

MAINTAINER=	dereckson@gmail.com
COMMENT=	CTorrent monitoring and managing interface

NO_BUILD=	#
USES=		perl5
USE_PERL5=	run
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
