# Created by: gpalmer
# $FreeBSD: misc/amanda26-client/Makefile 333014 2013-11-06 17:28:33Z bapt $

PKGNAMESUFFIX=	26-client
PORTREVISION=	2

COMMENT=	The Advanced Maryland Automatic Network Disk Archiver (client)

MASTERDIR=	${.CURDIR}/../amanda26-server
PKGINSTALL=	mustnotexist

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
