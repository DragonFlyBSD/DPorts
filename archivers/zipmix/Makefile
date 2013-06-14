# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: archivers/zipmix/Makefile 319206 2013-05-27 10:34:54Z bapt $

PORTNAME=	zipmix
DISTVERSION=	20070221
CATEGORIES=	archivers
MASTER_SITES=	http://www.advsys.net/ken/util/
DISTNAME=	${PORTNAME}_src

MAINTAINER=	lioux@FreeBSD.org
COMMENT=	Produce a .ZIP file from 2 other ones with the best compressed files

USE_DOS2UNIX=	yes
USE_ZIP=	yes
NO_WRKSUBDIR=	yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/${PORTNAME}

pre-build:
	@${CP} ${FILESDIR}/${MAKEFILE} ${WRKSRC}

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
