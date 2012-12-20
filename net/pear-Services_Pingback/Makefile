# Ports collection makefile for:  pear-Services_Pingback
# Date created:			  05 August 2007
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/net/pear-Services_Pingback/Makefile,v 1.3 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Services_Pingback
PORTVERSION=	0.2.2
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Pingback user-agent class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

CATEGORY=	Services
FILES=		Services/Pingback.php

EXAMPLES=	receive.php send.php source.php target.php
_EXAMPLESDIR=	docs/examples

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
