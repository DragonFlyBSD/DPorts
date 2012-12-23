# ports collection makefile for:	Berkeley DB v4.2
# Date created:				2003-11-26
# Whom:					Matthias Andree <matthias.andree@gmx.de>
#
# $FreeBSD: ports/databases/db42/Makefile,v 1.67 2012/11/17 05:55:06 svnexp Exp $
#

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

.include <${MASTERDIR}/Makefile.db>
.include <bsd.port.pre.mk>

.if ${ARCH} == x86_64
CONFIGURE_ARGS+=	--with-mutex=x86/gcc-assembly
.endif

.include <bsd.port.post.mk>
