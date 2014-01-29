# Created by: Max Khon
# $FreeBSD: news/husky-bsopack/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
.include "${.CURDIR}/../husky-base/Makefile.inc"
.include <bsd.port.mk>
