# Ports collection makefile for:  pear-Net_CheckIP
# Date created:			  29 November 2004
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/net/pear-Net_CheckIP/Makefile,v 1.9 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_CheckIP
PORTVERSION=	1.2.2
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Check the syntax of IPv4 addresses

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

FILES=		Net/CheckIP.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
