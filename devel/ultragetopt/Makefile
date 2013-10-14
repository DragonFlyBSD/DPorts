# Created by: Timothy Beyer <beyert@cs.ucr.edu>
# $FreeBSD: devel/ultragetopt/Makefile 327726 2013-09-20 17:17:44Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
