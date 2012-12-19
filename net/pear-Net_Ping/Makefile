# Ports collection makefile for:  pear-Net_Ping
# Date created:			  24 February 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/net/pear-Net_Ping/Makefile,v 1.11 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_Ping
PORTVERSION=	2.4.5
CATEGORIES=	net pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR class to execute ping

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		Ping.php
EXAMPLES=	example.php
_EXAMPLESDIR=	docs/examples

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
