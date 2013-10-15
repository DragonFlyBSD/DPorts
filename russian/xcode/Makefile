# Created by: Michael Vasilenko <acid@stu.cn.ua>
# $FreeBSD: russian/xcode/Makefile 327766 2013-09-20 22:46:16Z bapt $

PORTNAME=	xcode
PORTVERSION=	4.1
CATEGORIES=	russian converters
MASTER_SITES=	http://www.rusf.ru/books/yo/src/ \
		http://pankovpv.sovietservers.com/stuff/freebsd-distfiles/
DISTNAME=	xcodesrc

MAINTAINER=	pankov_p@mail.ru
COMMENT=	A program for converting Russian encodings with care to letter YO

PLIST_FILES=	bin/xcode
USE_ZIP=	yes
NO_WRKSUBDIR=	yes
MAKEFILE=	makefile
ALL_TARGET=	xcode
CFLAGS+=	-DD_KOI

NO_STAGE=	yes
do-install:
	@ ${INSTALL_PROGRAM} ${WRKSRC}/xcode ${PREFIX}/bin

.include <bsd.port.mk>
