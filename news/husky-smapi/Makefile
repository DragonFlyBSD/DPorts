# Created by: Max Khon
# $FreeBSD: news/husky-smapi/Makefile 322828 2013-07-12 12:28:43Z bapt $

PORTNAME=	smapi
PORTVERSION=	2.2.4
PORTREVISION=	2
CATEGORIES=	news mail
MASTER_SITES=	SF/husky/${PORTNAME}/2.2-release
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	MSGAPI for Husky Fidosoft Project

CONFLICTS=	husky-smapi-devel-[0-9]*

MAKE_ARGS=	ADDCDEFS=-fPIC
USE_LDCONFIG=	yes

.include "${.CURDIR}/../husky-base/Makefile.inc"
.include <bsd.port.mk>
