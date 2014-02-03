# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-video/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	octave-forge-video
PORTVERSION=	1.0.2
PORTREVISION=	11
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	BSD2CLAUSE

USES=		pkgconfig
GNU_CONFIGURE=	yes

LIB_DEPENDS+=	avcodec:${PORTSDIR}/multimedia/ffmpeg

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
