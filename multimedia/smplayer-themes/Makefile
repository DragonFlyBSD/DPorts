# New ports collection makefile for:	mplayer-themes
# Date created:				18 Jun, 2007
# Whom:	Diego Depaoli <trebestie@gmail.com> and Yinghong Liu <relaxbsd@gmail.com>
#
# $FreeBSD: ports/multimedia/smplayer-themes/Makefile,v 1.13 2012/11/17 05:59:53 svnexp Exp $
#

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
