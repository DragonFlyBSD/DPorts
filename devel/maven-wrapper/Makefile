# Created by: Herve Quiroz <hq@FreeBSD.org>
# $FreeBSD: devel/maven-wrapper/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	maven-wrapper
PORTVERSION=	1
PORTREVISION=	2
CATEGORIES=	devel java
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	hq@FreeBSD.org
COMMENT=	Wrapper script for the various installations of Maven

NO_BUILD=	yes
SUB_FILES=	mvn.sh
SUB_LIST=	CAT=${CAT} FIND=${FIND} TAIL=${TAIL}

NO_STAGE=	yes
do-fecth:
	@${DO_NADA}

do-install:
	${MKDIR} "${PREFIX}/etc/maven-wrapper/instances.d"
	${INSTALL_SCRIPT} "${WRKDIR}/mvn.sh" "${PREFIX}/bin/mvn"

.include <bsd.port.mk>
