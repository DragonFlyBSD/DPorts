# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: games/freeciv-sounds/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	freeciv
PORTVERSION=	3
CATEGORIES=	games
MASTER_SITES=	GENTOO/distfiles ftp://ftp.freeciv.org/freeciv/contrib/audio/soundsets/
PKGNAMESUFFIX=	-sounds
DISTNAME=	stdsounds${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Freeciv standard sound set

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/data

NO_STAGE=	yes
do-install:
	@cd ${WRKSRC}/&&${COPYTREE_SHARE} . ${DATADIR}/

.include <bsd.port.mk>
