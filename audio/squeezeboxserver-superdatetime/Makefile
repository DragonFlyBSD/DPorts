# Created by: Tim Bishop <tdb@FreeBSD.org>
# $FreeBSD: ports/audio/squeezeboxserver-superdatetime/Makefile,v 1.21 2012/11/17 05:54:45 svnexp Exp $

PORTNAME=	superdatetime
PORTVERSION=	5.9.14
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	squeezeboxserver-
DISTNAME=	SuperDateTime${PORTVERSION}
DIST_SUBDIR=	squeezeboxserver

MAINTAINER=	tdb@FreeBSD.org
COMMENT=	Squeezebox Server plugin to display weather conditions and forecasts

RUN_DEPENDS=	softsqueeze:${PORTSDIR}/audio/squeezeboxserver

PROJECTHOST=	grebrown-projects

USE_ZIP=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

SLIMDIR?=	squeezeboxserver
PLIST_SUB+=	SLIMDIR=${SLIMDIR}

do-install:
	${MKDIR} ${PREFIX}/${SLIMDIR}/Plugins/SuperDateTime
	${CP} -R ${WRKSRC}/SuperDateTime/* ${PREFIX}/${SLIMDIR}/Plugins/SuperDateTime

.include <bsd.port.mk>
