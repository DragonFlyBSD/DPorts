# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: databases/libgda3-odbc/Makefile 327717 2013-09-20 16:13:47Z bapt $
#   $MCom: ports/databases/libgda3-odbc/Makefile,v 1.2 2008/02/26 21:23:35 kwm Exp $

PORTREVISION?=	1
CATEGORIES=	databases gnome
PKGNAMESUFFIX?=	-odbc

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Provides odbc backend for the libgda3 library

MASTERDIR=	${.CURDIR}/../libgda3
BUILD_WRKSRC=	${WRKSRC}/providers/odbc/
INSTALL_WRKSRC=	${BUILD_WRKSRC}
PLIST=		${.CURDIR}/pkg-plist

LIBGDA3_SLAVE=	odbc

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
