# Created by: Hung-Yi Chen <gaod@hychen.org>
# $FreeBSD: ports/www/pecl-solr/Makefile,v 1.2 2013/02/21 06:45:36 svnexp Exp $

PORTNAME=	solr
PORTVERSION=	1.0.2
CATEGORIES=	www
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz

MAINTAINER=	gaod@hychen.org
COMMENT=	The Apache Solr PHP extension

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl \
    		xml2:${PORTSDIR}/textproc/libxml2

USE_PHP=	json
USE_PHPEXT=	yes
USE_PHPIZE=	yes
USE_PHP_BUILD=	yes

.include <bsd.port.mk>
