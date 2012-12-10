# Created by: trevor
# $FreeBSD: ports/security/find-zlib/Makefile,v 1.12 2012/11/17 06:01:03 svnexp Exp $

PORTNAME=	find_zlib
PORTVERSION=	1.9
CATEGORIES=	security
MASTER_SITES=	http://zlib.net/
DISTNAME=	find-zlib
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Scans files for statically linked zlib (libz) code

LICENSE=	GPLv2

NO_BUILD=	none

USE_PERL5_RUN=	yes

PLIST_FILES=	bin/find-zlib

do-install:
	${INSTALL_SCRIPT} ${DISTDIR}/${DISTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
