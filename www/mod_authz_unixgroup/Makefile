# Created by: Will Stacey <will@at.org>
# $FreeBSD: www/mod_authz_unixgroup/Makefile 336522 2013-12-15 12:34:18Z ohauer $

PORTNAME=	mod_authz_unixgroup
PORTVERSION=	1.0.3
CATEGORIES=	www
MASTER_SITES=	http://mod-auth-external.googlecode.com/files/
DIST_SUBDIR=	apache2

MAINTAINER=	apache@FreeBSD.org
COMMENT=	UNIX group access control module for Apache 2.2

LICENSE=	AL2

PORTSCOUT=	limit:^1\.0\.

USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SHORTMODNAME=	authz_unixgroup

.include <bsd.port.mk>
