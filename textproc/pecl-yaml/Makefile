# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: textproc/pecl-yaml/Makefile 340835 2014-01-23 16:00:14Z miwi $

PORTNAME=	yaml
PORTVERSION=	1.1.1
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	YAML-1.1 parser and emitter

LIB_DEPENDS=	yaml:${PORTSDIR}/textproc/libyaml

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes

.include <bsd.port.mk>
