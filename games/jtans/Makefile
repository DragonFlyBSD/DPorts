# ex:ts=8
# Ports collection makefile for:	jtans
# Date created:			Apr 3, 2003
# Whom:				ijliao
#
# $FreeBSD: ports/games/jtans/Makefile,v 1.10 2012/11/17 05:57:42 svnexp Exp $
#

PORTNAME=	jtans
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	games java
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}_appli-${PORTVERSION}
EXTRACT_SUFX=	.jar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A (not so) ancient puzzle

RUN_DEPENDS=	java:${PORTSDIR}/java/javavmwrapper

NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=	# empty
EXTRACT_AFTER_ARGS=	.
USE_JAVA=	yes
JAVA_VERSION=	1.5+
NO_BUILD=	yes
SUB_FILES=	jtans.sh
DATADIR=	${JAVASHAREDIR}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/jtans.sh ${PREFIX}/bin/jtans
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/jtans_appli-1.0.jar ${DATADIR}

.include <bsd.port.mk>
