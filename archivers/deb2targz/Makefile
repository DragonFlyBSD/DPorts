# New ports collection makefile for:	deb2targz
# Date created:				27 Sep 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/archivers/deb2targz/Makefile,v 1.9 2012/11/17 05:54:20 svnexp Exp $
#

PORTNAME=	deb2targz
PORTVERSION=	20100710
CATEGORIES=	archivers
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A command-line utility for converting a Debian .deb file to a .tar.gz

NO_BUILD=	yes

PLIST_FILES=	bin/deb2targz

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME}.sh ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
