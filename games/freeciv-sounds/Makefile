# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: games/freeciv-sounds/Makefile 340722 2014-01-22 17:00:46Z mat $

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
