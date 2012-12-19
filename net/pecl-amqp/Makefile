# New ports collection makefile for:	pecl-amqp
# Date created:		2011-09-19
# Whom:			Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
#
# $FreeBSD: ports/net/pecl-amqp/Makefile,v 1.2 2012/11/17 06:00:15 svnexp Exp $
#

PORTNAME=	amqp
PORTVERSION=	0.3.1
CATEGORIES=	net pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	jnlin@csie.nctu.edu.tw
COMMENT=	PHP extension for AMQP API

LIB_DEPENDS=	rabbitmq:${PORTSDIR}/net/rabbitmq-c-devel

PHP_MODNAME=	${PORTNAME}
USE_PHP=	yes
USE_PHPEXT=	yes

.include <bsd.port.mk>
