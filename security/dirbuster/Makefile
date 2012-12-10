# New ports collection makefile for:    dirbuster
# Date created:				2010-03-08
# Whom:					Niels Heinen
#
# $FreeBSD: ports/security/dirbuster/Makefile,v 1.4 2012/11/17 06:01:03 svnexp Exp $
#

PORTNAME=	dirbuster
PORTVERSION=	1.0r1
CATEGORIES=	security java
MASTER_SITES=	SF/${PORTNAME}/DirBuster%20%28jar%20%2B%20lists%29/1.0-RC1/
DISTNAME=	DirBuster-1.0-RC1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DirBuster allows file and directory brute forcing on web servers

USE_ZIP=	YES
USE_JAVA=	YES
JAVA_VERSION=	1.5+
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${DISTNAME}
DATADIR=	${JAVASHAREDIR}/${PORTNAME}

.include <bsd.port.pre.mk>

post-extract:
	${RM} ${WRKSRC}/${DISTNAME}.sh
	${RM} ${WRKSRC}/${DISTNAME}.bat

pre-install:
	@${SED} -e 's:%%PATH%%:${DATADIR}/:' \
		-e 's:%%JAVA_CMD%%:${JAVA}:' \
		-e 's:%%DIRBUSTER%%:${DATADIR}/${DISTNAME}.jar:' \
		< ${FILESDIR}/${PORTNAME}.sh > ${WRKDIR}/${PORTNAME}

do-install:
	${MKDIR} ${DATADIR}
	${CP} -R ${WRKSRC}/* ${DATADIR}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.post.mk>
