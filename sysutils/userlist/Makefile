# Created by: Jamie Heckford <jamie@jamiesdomain.co.uk>
# $FreeBSD: sysutils/userlist/Makefile 333994 2013-11-16 13:33:45Z vanilla $

PORTNAME=	userlist
PORTVERSION=	0.1
CATEGORIES=	sysutils
MASTER_SITES=	# does no longer exist
DISTFILES=	# n/a

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Prints a list of all usernames in /etc/passwd

NO_BUILD=	yes
PLIST_FILES=	bin/userlist

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/userlist ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
