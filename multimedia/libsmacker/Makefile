# $FreeBSD: multimedia/libsmacker/Makefile 314774 2013-03-20 22:52:04Z pawel $

PORTNAME=	libsmacker
PORTVERSION=	1.0
CATEGORIES=	multimedia
MASTER_SITES=	SF/${PORTNAME}/$(DISTNAME)/

MAINTAINER=	kennedy.greg@gmail.com
COMMENT=	C library for decoding .smk Smacker Video files

CFLAGS+=	-fPIC
USE_LDCONFIG=	yes

PLIST_FILES=	lib/libsmacker.so

post-patch:
	@${REINPLACE_CMD} '/CFLAGS/s|+=|?=|; s|gcc|${CC}|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
