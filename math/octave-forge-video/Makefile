# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-video/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	octave-forge-video
PORTVERSION=	1.0.2
PORTREVISION=	10
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

USES=		pkgconfig
GNU_CONFIGURE=	yes

LIB_DEPENDS+=	avcodec:${PORTSDIR}/multimedia/ffmpeg

NO_STAGE=	yes
.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
