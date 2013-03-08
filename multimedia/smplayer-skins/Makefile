# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: ports/multimedia/smplayer-skins/Makefile,v 1.1 2013/02/18 20:51:33 svnexp Exp $

PORTNAME=	smplayer-skins
PORTVERSION=	20121029
CATEGORIES=	multimedia audio kde
MASTER_SITES=	SF/smplayer/SMPlayer-skins/${PORTVERSION}

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Skins for SMPlayer (Skinnable GUI)

USE_BZIP2=	yes
NO_BUILD=	yes

DATADIR=	${PREFIX}/share/smplayer

post-patch:
	@${REINPLACE_CMD} -e 's|PREFIX=/usr/local|PREFIX=${PREFIX}|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
