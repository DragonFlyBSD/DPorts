# Created by: Greg Lewis <glewis@FreeBSD.org>
# $FreeBSD: java/java-zoneinfo/Makefile 330185 2013-10-12 20:15:30Z glewis $

PORTNAME=	zoneinfo
DISTVERSION=	2013g
CATEGORIES=	java misc
MASTER_SITES=	${MASTER_SITE_LOCAL:S|%SUBDIR%|glewis/javazi|}
PKGNAMEPREFIX=	java-
DISTNAME=	javazi-${DISTVERSION}

MAINTAINER=	glewis@FreeBSD.org
COMMENT=	Updated Java timezone definitions

WRKSRC=		${WRKDIR}
NO_BUILD=	yes

JAVASHAREDIR=	${PREFIX}/share/java

NO_STAGE=	yes
do-install:
	${MKDIR} ${JAVASHAREDIR}/zi
	(cd ${WRKSRC}/zi && ${COPYTREE_SHARE} \* ${JAVASHAREDIR}/zi/)

.include <bsd.port.mk>
