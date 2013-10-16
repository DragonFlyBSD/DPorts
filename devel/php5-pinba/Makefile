# Created by: raven428 <raven428@gmail.com>
# $FreeBSD: devel/php5-pinba/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	pinba
PORTVERSION=	2012.03.20
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	https://github.com/tony2001/pinba_extension/tarball/${GITVERSION}/
PKGNAMEPREFIX=	php5-
DISTNAME=	tony2001-pinba_extension-${GITVERSION}

MAINTAINER=	komarov@valerka.net
COMMENT=	PHP-extension part of statistics server for PHP

LIB_DEPENDS=	protobuf:${PORTSDIR}/devel/protobuf

GITVERSION=	f76b673
FETCH_ARGS=	-pRr

WRKSRC=		${WRKDIR}/${DISTNAME}

USE_PHP=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	pinba

NO_STAGE=	yes
.include <bsd.port.mk>
