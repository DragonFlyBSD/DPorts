# $FreeBSD: ports/audio/xmms-bonk/Makefile,v 1.12 2012/11/17 05:54:48 svnexp Exp $

PORTNAME=	xmms-bonk
PORTVERSION=	0.12
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	http://www.proustmedia.de/bonk-xmms/
DISTNAME=	bonk-xmms-${PORTVERSION}

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	XMMS input plugin to play bonk files

LIB_DEPENDS=	xmms.4:${PORTSDIR}/multimedia/xmms

ALL_TARGET=

do-install:
	${INSTALL_DATA} ${WRKSRC}/libbonk.so ${PREFIX}/lib/xmms/Input

.include <bsd.port.mk>
