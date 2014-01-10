# Created by: Pedro Giffuni <giffunip@asme.org>
# $FreeBSD: science/elmer-matc/Makefile 337470 2013-12-26 02:47:52Z marino $

PORTNAME=	matc
PORTVERSION=	5.4.0
PORTREVISION=	4
CATEGORIES=	science
MASTER_SITES=	http://garr.dl.sourceforge.net/sourceforge/elmerfem/
PKGNAMEPREFIX=	elmer-

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	MatC language library used by ELMER FEM package

CXXFLAGS+=	-Wno-deprecated

GNU_CONFIGURE=	yes
USES=		fortran

PLIST_SUB=	ARCH=${MACHINE_ARCH}

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64" || ${ARCH} == "ia64"
CFLAGS+=	-fPIC
FFLAGS+=	-fPIC
.endif

.include <bsd.port.post.mk>
