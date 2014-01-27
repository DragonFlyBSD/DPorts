# Created by: gpalmer
# $FreeBSD: misc/amanda-client/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMESUFFIX=	-client
PORTREVISION=	0

COMMENT=	The Advanced Maryland Automatic Network Disk Archiver (client)

MASTERDIR=	${.CURDIR}/../amanda-server
PKGINSTALL=	mustnotexist

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
