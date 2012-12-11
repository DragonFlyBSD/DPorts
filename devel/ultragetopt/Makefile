# New ports collection makefile for: ultragetopt
# Date created:        20 Mar 2012
# Whom:                Timothy Beyer <beyert@cs.ucr.edu>
#
# $FreeBSD: ports/devel/ultragetopt/Makefile,v 1.2 2012/11/17 05:57:06 svnexp Exp $
#

PORTNAME=	ultragetopt
PORTVERSION=	0.6.0
CATEGORIES=	devel
MASTER_SITES=	http://kevinlocke.name/programs/ ${MASTER_SITE_LOCAL}

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Versatile and customizable implementation of getopt()

LICENSE=	MIT

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKE_ARGS=	PREFIX="${PREFIX}"
USE_LDCONFIG=	yes
PLIST_FILES=	include/ultragetopt.h lib/libultragetopt.a \
		lib/libultragetopt.la lib/libultragetopt.so \
		lib/libultragetopt.so.0

.include <bsd.port.mk>
