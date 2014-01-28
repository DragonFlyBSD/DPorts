# Created by: Gleb Smirnoff <glebius@FreeBSD.org>
# $FreeBSD: astro/osmosis/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	osmosis
PORTVERSION=	0.43.1
CATEGORIES=	astro java
MASTER_SITES=	http://bretth.dev.openstreetmap.org/osmosis-build/ \
		http://mirror.amdmi3.ru/distfiles/
EXTRACT_SUFX=	.tgz

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Command line Java app for processing OpenStreetMap data

NO_BUILD=	yes
WRKSRC=		${WRKDIR}

USE_JAVA=	yes
JAVA_VERSION=	1.6+

PLIST_FILES=	bin/${PORTNAME}
PORTDATA=	*

post-patch:
	@${REINPLACE_CMD} -e 's|^\(MYAPP_HOME=\).*|\1${DATADIR}|' ${WRKSRC}/bin/osmosis

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} "script config lib" ${STAGEDIR}${DATADIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/bin/osmosis ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
