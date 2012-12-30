# Created by: Clement Laforet <clement@FreeBSD.org>
# $FreeBSD: ports/www/mod_log_config-st/Makefile,v 1.10 2012/11/17 06:02:41 svnexp Exp $

PORTNAME=	mod_log_config-st
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	www
# Original location: http://bitbrook.de/software/mod_log_mysql/mod_log_config.c
MASTER_SITES=	http://sheepkiller.nerim.net/ports/${PORTNAME}/
DIST_SUBDIR=	apache2

MAINTAINER=	apache@FreeBSD.org
COMMENT=	A modified version of mod_log_config for apache2

MAKE_JOBS_SAFE=	yes

USE_APACHE=	22

AP_FAST_BUILD=	yes
SRC_FILE=	mod_log_config.c
SHORTMODNAME=	log_config
MODULENAME=	mod_log_config-st

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
