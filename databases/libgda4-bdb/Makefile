# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: databases/libgda4-bdb/Makefile 314630 2013-03-19 10:26:51Z kwm $

PORTREVISION=	0
CATEGORIES=	databases gnome
PKGNAMESUFFIX=	4-bdb

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Provides Berkeley DB backend for the libgda4 library

MASTERDIR=	${.CURDIR}/../libgda4
BUILD_WRKSRC=	${WRKSRC}/providers/bdb/
INSTALL_WRKSRC=	${BUILD_WRKSRC}
PLIST=		${.CURDIR}/pkg-plist

LIBGDA4_SLAVE=	bdb

.include "${MASTERDIR}/Makefile"
