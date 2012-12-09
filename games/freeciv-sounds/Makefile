# New ports collection makefile for:	freeciv-sounds
# Date created:		28 July 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/games/freeciv-sounds/Makefile,v 1.3 2012/11/17 05:57:38 svnexp Exp $
#

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
	@cd ${WRKSRC}/&&${COPYTREE_SHARE} . ${DATADIR}/

.include <bsd.port.mk>
