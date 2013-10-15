# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: databases/libgda4-bdb/Makefile 327717 2013-09-20 16:13:47Z bapt $

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

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
