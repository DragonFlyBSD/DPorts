# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: games/freeciv-sounds/Makefile 332376 2013-11-01 13:53:59Z danilo $

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

do-install:
	@cd ${WRKSRC}/&&${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
