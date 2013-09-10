# Created by: Phil Oleson
# $FreeBSD: multimedia/dv2sub/Makefile 325750 2013-08-31 00:29:43Z bapt $

PORTNAME=	dv2sub
PORTVERSION=	0.3
PORTREVISION=	4
CATEGORIES=	multimedia
MASTER_SITES=	SF

MAINTAINER=	oz@nixil.net
COMMENT=	Extracts info or subtitles from DV stream

LIB_DEPENDS=	dv.4:${PORTSDIR}/multimedia/libdv

GNU_CONFIGURE=	yes
USES=		pkgconfig

PLIST_FILES=	bin/dv2sub
MAN1=		dv2sub.1

.include <bsd.port.mk>
