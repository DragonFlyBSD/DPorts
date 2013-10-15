# Created by: hosokawa
# $FreeBSD: converters/ish/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	ish
PORTVERSION=	2.01a5
CATEGORIES=	converters
MASTER_SITES=	http://www.unix.gr.jp/jnetcex/soft/\
		${MASTER_SITE_PORTS_JP}
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Binary-to-text file-encoder

MAKEFILE=	makefile
MAKE_ARGS=	CFLAGS="${CFLAGS}" DEST=${PREFIX}/bin
PLIST_FILES=	bin/ish
ALL_TARGET=	ish

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
