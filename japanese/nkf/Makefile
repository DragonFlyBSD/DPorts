# Created by: asami
# $FreeBSD: ports/japanese/nkf/Makefile,v 1.43 2013/02/04 11:36:18 svnexp Exp $

PORTNAME=	nkf
PORTVERSION=	2.1.2
PORTEPOCH=	1
CATEGORIES?=	japanese
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE_JP}
MASTER_SITE_SUBDIR=	${PORTNAME}/53171
PKGNAMEPREFIX?=	ja-

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	Network Kanji code conversion Filter

LICENSE?=	ZLIB
LICENSE_FILE?=	${WRKSRC}/nkf.c

.if ${PKGNAMEPREFIX} != "ja-p5-"
MAN1=		nkf.1
MANLANG=	"" ja
PLIST_FILES=	bin/nkf
ALL_TARGET=	nkf
.endif

.include <bsd.port.mk>
