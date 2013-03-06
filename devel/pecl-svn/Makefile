# New ports collection makefile for:	pecl-svn
# Date created:			20051220
# Whom:				Alex Kiesel <kiesel@schlund.de>
#
# $FreeBSD: ports/devel/pecl-svn/Makefile,v 1.26 2012/11/17 05:56:41 svnexp Exp $
#

PORTNAME=	svn
PORTVERSION=	1.0.2
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension to the libsvn library

LICENSE=	PHP301

LIB_DEPENDS=	svn_client-1:${PORTSDIR}/devel/subversion16

USE_PHP=	yes
USE_PHPEXT=	yes

.include <bsd.port.mk>
