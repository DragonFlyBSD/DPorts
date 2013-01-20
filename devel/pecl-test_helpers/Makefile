# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: ports/devel/pecl-test_helpers/Makefile,v 1.1 2012/12/29 12:37:19 svnexp Exp $

PORTNAME=	test_helpers
PORTVERSION=	1.1.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.phpunit.de/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Extension to ease testing of PHP code

CONFIGURE_ARGS=	--enable-test-helpers
USE_PHP=	yes
USE_PHPEXT=	yes
USE_PHPIZE=	yes
SUB_FILES=	pkg-message

PKGMESSAGE=	${WRKDIR}/pkg-message

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
