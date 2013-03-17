# New ports collection makefile for:    MySQL-scripts
# Date created:         28 Jan 2006
# Whom:                 Alex Dupre <ale@FreeBSD.org>
#
# $FreeBSD: ports/databases/mysql51-scripts/Makefile,v 1.14 2012/11/17 05:55:12 svnexp Exp $
#

PORTNAME=	mysql
PKGNAMESUFFIX=	-scripts

COMMENT=	Multithreaded SQL database (scripts)

MASTERDIR=	${.CURDIR}/../mysql51-server

PKGINSTALL=	mustnotexist
PKGMESSAGE=	mustnotexist
PLIST=		${PKGDIR}/pkg-plist.scripts

SCRIPTS_ONLY=	yes
USE_PERL5=	yes

.include "${MASTERDIR}/Makefile"
