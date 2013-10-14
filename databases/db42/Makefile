# Created by: Matthias Andree <matthias.andree@gmx.de>
# $FreeBSD: databases/db42/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	db42
PORTVERSION=	4.2.52
PORTREVISION=	5
CATEGORIES=	databases
PKGNAMESUFFIX?=

PATCHFILES=	patch.${PORTVERSION}.1  patch.${PORTVERSION}.2 \
		patch.${PORTVERSION}.3  patch.${PORTVERSION}.4 \
		patch.${PORTVERSION}.5

MAINTAINER=	mandree@FreeBSD.org
COMMENT=	The Berkeley DB package, revision 4.2

MASTERDIR?=	${.CURDIR}

SLAVE_PORT=	no

NO_STAGE=	yes
.include <${MASTERDIR}/Makefile.db>
.include <bsd.port.pre.mk>

.if ${ARCH} == x86_64
CONFIGURE_ARGS+=	--with-mutex=x86/gcc-assembly
.endif

.include <bsd.port.post.mk>
