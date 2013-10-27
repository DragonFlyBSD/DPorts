# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: math/octave-forge-zenity/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	octave-forge-zenity
PORTVERSION=	0.5.7
PORTREVISION=	8
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

GNU_CONFIGURE=	yes

RUN_DEPENDS+=	zenity:${PORTSDIR}/x11/zenity

NO_STAGE=	yes
.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
