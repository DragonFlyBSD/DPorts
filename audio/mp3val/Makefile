# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@sunpoet.net>
# $FreeBSD: audio/mp3val/Makefile 334834 2013-11-25 11:33:38Z sunpoet $

PORTNAME=	mp3val
PORTVERSION=	0.1.8
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Program for MPEG audio stream validation

LICENSE=	GPLv2

ALL_TARGET=	mp3val
MAKEFILE=	Makefile.linux
USES=		gmake

PLIST_FILES=	bin/mp3val

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mp3val ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
