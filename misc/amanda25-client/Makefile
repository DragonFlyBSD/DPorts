# New ports collection makefile for:	amanda
# Date created:				28th Feb 1995
# Whom:					gpalmer
#
# $FreeBSD: ports/misc/amanda25-client/Makefile,v 1.64 2012/11/17 05:59:32 svnexp Exp $
#

PKGNAMESUFFIX=	-client
PORTREVISION=	4

COMMENT=	The Advanced Maryland Automatic Network Disk Archiver (client)

MASTERDIR=	${.CURDIR}/../amanda25-server
PKGINSTALL=	mustnotexist

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
