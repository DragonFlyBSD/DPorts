# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: ports/archivers/deb2targz/Makefile,v 1.10 2012/12/18 08:04:12 svnexp Exp $

PORTNAME=	deb2targz
PORTVERSION=	20100710
CATEGORIES=	archivers
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Command-line utility for converting a Debian .deb file to a .tar.gz

NO_BUILD=	yes

PLIST_FILES=	bin/deb2targz

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME}.sh ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
