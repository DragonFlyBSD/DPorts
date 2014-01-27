# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: www/mod_setenvifplus/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mod_setenvifplus
PORTVERSION=	0.22
CATEGORIES=	www
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	modsetenvifplus
EXTRACT_SUFX=	-src.tar.gz
DIST_SUBDIR=	apache2

MAINTAINER=	ports@christianserving.org
COMMENT=	Allows setting environment variables based on request attributes

LICENSE=	APACHE20

USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SRC_FILE=	${WRKSRC}/apache2/${MODULENAME}.c

.include <bsd.port.mk>
