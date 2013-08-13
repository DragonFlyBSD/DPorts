# Created by: Max Khon
# $FreeBSD: news/husky-bsopack/Makefile 322828 2013-07-12 12:28:43Z bapt $

PORTNAME=	bsopack
PORTVERSION=	0.2.4
PORTREVISION=	2
CATEGORIES=	news mail
MASTER_SITES=	SF/husky/${PORTNAME}/0.2-release
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	Binkley-style outbound netmail packer

LIB_DEPENDS=	fidoconfig.0:${PORTSDIR}/news/husky-fidoconf

MAN1=		bsopack.1
MANCOMPRESSED=	yes
INFO=		bsopack

.include "${.CURDIR}/../husky-base/Makefile.inc"
.include <bsd.port.mk>
