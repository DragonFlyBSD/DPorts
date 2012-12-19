# Ports collection makefile for:  pear-Net_Finger
# Date created:			  07 March 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/net/pear-Net_Finger/Makefile,v 1.7 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_Finger
PORTVERSION=	1.0.1
CATEGORIES=	net www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR class that provides a tool for querying finger servers

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		Finger.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
