# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: databases/libgda3-ldap/Makefile 340722 2014-01-22 17:00:46Z mat $
#   $MCom: ports/databases/libgda3-ldap/Makefile,v 1.2 2008/02/26 21:23:34 kwm Exp $

PORTREVISION?=	2
CATEGORIES=	databases gnome
PKGNAMESUFFIX?=	-ldap

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Provides ldap backend for the libgda3 library

MASTERDIR=	${.CURDIR}/../libgda3
BUILD_WRKSRC=	${WRKSRC}/providers/ldap/
INSTALL_WRKSRC=	${BUILD_WRKSRC}
PLIST=		${.CURDIR}/pkg-plist

LIBGDA3_SLAVE=	ldap

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
