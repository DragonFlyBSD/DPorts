# New ports collection makefile for:	OpenMSX
# Date created:				2010-11-04
# Whom:					Ilya A. Arhipov <admin@gorodkirov.ru>
#
# $FreeBSD: ports/games/openmsx/Makefile,v 1.5 2012/11/17 05:57:48 svnexp Exp $
#

PORTNAME=	openmsx
PORTVERSION=	0.3.1
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	http://hu.binaries.openttd.org/binaries/extra/${PORTNAME}/${PORTVERSION}/ \
		http://us.binaries.openttd.org/binaries/extra/${PORTNAME}/${PORTVERSION}/ \
		http://cz.binaries.openttd.org/openttd/binaries/extra/${PORTNAME}/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-all

MAINTAINER=	micro@heavennet.ru
COMMENT=	Free alternative music for OpenTTD game engine

USE_ZIP=	yes
NO_BUILD=	yes
LATEST_LINK=	openttd-${PORTNAME}

do-install:
	@${MKDIR} ${PREFIX}/share/openttd/baseset/openmsx
	${INSTALL_DATA} ${WRKDIR}/openmsx-${PORTVERSION}/* \
		${PREFIX}/share/openttd/baseset/openmsx

.include <bsd.port.mk>
