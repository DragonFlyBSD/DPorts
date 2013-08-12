# Created by: trevor
# $FreeBSD: security/find-zlib/Makefile 324191 2013-08-03 13:44:00Z mat $

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

USES=		perl5
USE_PERL5=	run

PLIST_FILES=	bin/find-zlib

do-install:
	${INSTALL_SCRIPT} ${DISTDIR}/${DISTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
