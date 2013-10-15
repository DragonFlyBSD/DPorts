# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: multimedia/umr/Makefile 327747 2013-09-20 20:57:48Z bapt $

PORTNAME=	umr
PORTVERSION=	0.3
CATEGORIES=	multimedia
MASTER_SITES=	http://www.oldunreal.com/mods/other/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unreal Media Ripper


PLIST_FILES=	bin/${PORTNAME}

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
