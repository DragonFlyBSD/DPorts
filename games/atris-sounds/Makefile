# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: games/atris-sounds/Makefile 334088 2013-11-17 15:21:04Z danilo $

PORTNAME=	atris
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.wkiri.com/projects/atris/
PKGNAMESUFFIX=	-sounds
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sounds for Atris: Alizarin Tetris

RUN_DEPENDS=	atris:${PORTSDIR}/games/atris

USES=		gmake
GNU_CONFIGURE=	yes
NO_WRKSUBDIR=	yes

post-patch:
# Fix path to ${DATADIR}
	${REINPLACE_CMD} -e 's|\(GAME_INSTALLDIR=\).*|\1"${DATADIR}"|' \
			${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}

do-install:
	(cd ${WRKSRC} ; ${COPYTREE_SHARE} sounds ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
