# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: multimedia/umr/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	umr
PORTVERSION=	0.3
CATEGORIES=	multimedia
MASTER_SITES=	http://www.oldunreal.com/mods/other/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unreal Media Ripper


PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
