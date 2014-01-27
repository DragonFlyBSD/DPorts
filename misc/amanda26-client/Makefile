# Created by: gpalmer
# $FreeBSD: misc/amanda26-client/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMESUFFIX=	26-client
PORTREVISION=	2

COMMENT=	The Advanced Maryland Automatic Network Disk Archiver (client)

MASTERDIR=	${.CURDIR}/../amanda26-server
PKGINSTALL=	mustnotexist

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
