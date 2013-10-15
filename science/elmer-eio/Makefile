# Created by: Pedro Giffuni <giffunip@asme.org>
# $FreeBSD: science/elmer-eio/Makefile 327767 2013-09-20 22:48:30Z bapt $

PORTNAME=	eio
PORTVERSION=	5.4.0
PORTREVISION=	3
CATEGORIES=	science
MASTER_SITES=   http://garr.dl.sourceforge.net/sourceforge/elmerfem/
PKGNAMEPREFIX=	elmer-

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	ELMER FEM Package Data base Interface

USE_FORTRAN=	yes

GNU_CONFIGURE=	yes
ALL_TARGET=

PLIST_FILES=	include/eio_api.h lib/libeioc.a lib/libeiof.a

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64" || ${ARCH} == "ia64"
CFLAGS+=	-fPIC
FCFLAGS+=	-fPIC
.endif

.include <bsd.port.post.mk>
