# Ports collection makefile for:  pear-Services_Yadis
# Date created:			  21 Jan 2007
# Whom:				  Ditesh Shashikant Gathani <ditesh@gathani.org>
#
# $FreeBSD: ports/www/pear-Services_Yadis/Makefile,v 1.8 2012/11/17 06:02:57 svnexp Exp $
#

PORTNAME=	Services_Yadis
PORTVERSION=	0.5.1
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Implementation of the Yadis Specification 1.0 protocol for PHP5

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_CATSRC=	yes
USE_PHP=	simplexml dom
CATEGORY=	Services
FILES=		Yadis.php Yadis/Xri.php Yadis/Xrds.php Yadis/Service.php \
		Yadis/Exception.php Yadis/Xrds/Namespace.php \
		Yadis/Xrds/Service.php

TESTS=		AllTests.php TestConfiguration.php.dist TestHelper.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
