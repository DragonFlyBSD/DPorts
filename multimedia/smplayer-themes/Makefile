# Created by: Diego Depaoli <trebestie@gmail.com> and Yinghong Liu <relaxbsd@gmail.com>
# $FreeBSD: multimedia/smplayer-themes/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	smplayer-themes
PORTVERSION=	0.1.20
CATEGORIES=	multimedia audio kde
MASTER_SITES=	SF/smplayer/SMPlayer-themes/${PORTVERSION}

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Themes for smplayer

USE_BZIP2=	yes
NO_BUILD=	yes

DATADIR=	${PREFIX}/share/smplayer

post-patch:
	@${REINPLACE_CMD} -e 's|PREFIX=/usr/local|PREFIX=${PREFIX}|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
