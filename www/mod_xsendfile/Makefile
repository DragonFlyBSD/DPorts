# New ports collection makefile for:	mod_xsendfile Apache module
# Date created:			2006-11-23
# Whom:				Andrew T. Bennett <potatosaladx@gmail.com>
#
# $FreeBSD: ports/www/mod_xsendfile/Makefile,v 1.7 2012/11/17 06:02:42 svnexp Exp $
#

PORTNAME=	mod_xsendfile
PORTVERSION=	0.12
PORTREVISION=	2
CATEGORIES=	www
MASTER_SITES=	https://tn123.org/mod_xsendfile/ \
		http://cloud.github.com/downloads/potatosalad/mod_xsendfile/

MAINTAINER=	potatosaladx@gmail.com
COMMENT=	An Apache2 module that processes X-SENDFILE headers

MAKE_JOBS_SAFE=	yes

USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

.include <bsd.port.mk>
