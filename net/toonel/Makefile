# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: net/toonel/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	toonel
PORTVERSION=	0.0.50.50
CATEGORIES=	net java
MASTER_SITES=	http://www.toonel.net/generic/005050/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=	# empty

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Tunneling with data compression

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

USE_JAVA=	yes
JAVA_VERSION=	1.6+

SUB_FILES=	${PORTNAME}.sh
SUB_LIST=	JARNAME=${DISTNAME}${EXTRACT_SUFX}

PLIST_FILES=	bin/${PORTNAME} ${JAVAJARDIR:C,${PREFIX}/?,,}/${DISTNAME}${EXTRACT_SUFX}

NO_STAGE=	yes
do-install:
	${MKDIR} ${JAVAJARDIR}/
	${INSTALL_DATA} ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX} ${JAVAJARDIR}/
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME}.sh ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
