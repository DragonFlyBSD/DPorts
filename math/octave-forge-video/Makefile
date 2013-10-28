# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-video/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	octave-forge-video
PORTVERSION=	1.0.2
PORTREVISION=	11
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

USES=		pkgconfig
GNU_CONFIGURE=	yes

LIB_DEPENDS+=	avcodec:${PORTSDIR}/multimedia/ffmpeg

NO_STAGE=	yes
.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
