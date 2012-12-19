# Ports collection makefile for:  pear-URI_Template
# Date created:			  07 April 2008
# Whom:				  wenheping <wenheping@gmail.com>
#
# $FreeBSD: ports/net/pear-URI_Template/Makefile,v 1.8 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	URI_Template
PORTVERSION=	0.3.3
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Parser for URI Templates

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_CATSRC=	yes
CATEGORY=	URI
FILES=		Template.php
TESTS=		AllTests.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
