# Created by: Kuan-Chung Chiu <buganini@gmail.com>
# $FreeBSD: multimedia/yamdi/Makefile 327747 2013-09-20 20:57:48Z bapt $

PORTNAME=	yamdi
PORTVERSION=	1.9
CATEGORIES=	multimedia
MASTER_SITES=	SF

MAINTAINER=	buganini@gmail.com
COMMENT=	Metadata injector for FLV files

LICENSE=	BSD

PLIST_FILES=	bin/yamdi

NO_STAGE=	yes
do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} yamdi.c -o yamdi

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/yamdi ${PREFIX}/bin

.include <bsd.port.mk>
