# Created by: Michael Vasilenko <acid@stu.cn.ua>
# $FreeBSD: russian/xcode/Makefile 340722 2014-01-22 17:00:46Z mat $

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
