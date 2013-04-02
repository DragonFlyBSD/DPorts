# New ports collection makefile for:	squeezeboxserver-trackstat
# Date created:		21 June 2008
# Whom:			Tim Bishop <tdb@FreeBSD.org>
#
# $FreeBSD: ports/audio/squeezeboxserver-trackstat/Makefile,v 1.12 2012/11/17 05:54:45 svnexp Exp $
#

PORTNAME=	trackstat
PORTVERSION=	2.11.3435
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://erland.isaksson.info/download/do/downloadapplication?name=slimserver-trackstat&filename=/
PKGNAMEPREFIX=	squeezeboxserver-
DISTNAME=	TrackStat-${PORTVERSION:S/b/beta/}
DIST_SUBDIR=	squeezeboxserver

MAINTAINER=	tdb@FreeBSD.org
COMMENT=	Squeezebox Server plugin to store ratings and statistics about songs

RUN_DEPENDS=	softsqueeze:${PORTSDIR}/audio/squeezeboxserver

FETCH_BEFORE_ARGS=	-o ${DISTFILES}
USE_ZIP=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

SLIMDIR?=	squeezeboxserver
PLIST_SUB+=	SLIMDIR=${SLIMDIR}

do-install:
	${MKDIR} ${PREFIX}/${SLIMDIR}/Plugins/TrackStat
	${CP} -R ${WRKSRC}/TrackStat/* ${PREFIX}/${SLIMDIR}/Plugins/TrackStat

.include <bsd.port.mk>
