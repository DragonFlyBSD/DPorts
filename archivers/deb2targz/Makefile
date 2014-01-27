# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: archivers/deb2targz/Makefile 340722 2014-01-22 17:00:46Z mat $

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
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME}.sh ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
