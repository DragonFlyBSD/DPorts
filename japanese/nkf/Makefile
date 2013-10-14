# Created by: asami
# $FreeBSD: japanese/nkf/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	nkf
PORTVERSION=	2.1.2
PORTEPOCH=	1
CATEGORIES?=	japanese
MASTER_SITES=	SFJP/${PORTNAME}/53171

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Network Kanji code conversion Filter

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/nkf.c

ALL_TARGET=	nkf
PLIST_FILES=	bin/nkf

MAN1=		nkf.1
MANLANG=	"" ja

NO_STAGE=	yes
.include <bsd.port.mk>
