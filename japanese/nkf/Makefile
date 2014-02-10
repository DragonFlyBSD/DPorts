# Created by: asami
# $FreeBSD: head/japanese/nkf/Makefile 342597 2014-02-04 19:34:34Z hrs $

PORTNAME=	nkf
PORTVERSION=	2.1.3
PORTEPOCH=	1
CATEGORIES?=	japanese
MASTER_SITES=	SFJP/${PORTNAME}/59912

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Network Kanji code conversion Filter

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/nkf.c

MAKE_ENV=	MKDIR="${MKDIR}"
PLIST_FILES=	bin/nkf man/man1/nkf.1.gz man/ja/man1/nkf.1.gz

.include <bsd.port.mk>
