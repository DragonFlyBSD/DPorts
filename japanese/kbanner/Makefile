# Created by: sumikawa
# $FreeBSD: japanese/kbanner/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	kbanner
PORTVERSION=	2.1
PORTREVISION=	5
CATEGORIES=	japanese
MASTER_SITES=	http://kanji.zinbun.kyoto-u.ac.jp/~yasuoka/ftp/program/
DISTNAME=	${PORTNAME}2
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Displays large Japanese letters on the standard output

ALL_TARGET=	kbanner
CFLAGS+=	-Wno-error=return-type
MAN1=		kbanner.1
PLIST_FILES=	bin/kbanner

NO_STAGE=	yes
.include <bsd.port.mk>
