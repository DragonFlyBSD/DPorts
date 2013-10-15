# Created by: gpalmer
# $FreeBSD: misc/amanda-client/Makefile 327745 2013-09-20 20:50:57Z bapt $

PKGNAMESUFFIX=	-client
PORTREVISION=	0

COMMENT=	The Advanced Maryland Automatic Network Disk Archiver (client)

MASTERDIR=	${.CURDIR}/../amanda-server
PKGINSTALL=	mustnotexist

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
