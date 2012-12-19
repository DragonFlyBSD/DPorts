# Ports collection makefile for:  pear-Net_Dict
# Date created:			  07 March 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/net/pear-Net_Dict/Makefile,v 1.11 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_Dict
PORTVERSION=	1.0.7
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR interface to the DICT protocol

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket \
		${PEARDIR}/Cache.php:${PORTSDIR}/sysutils/pear-Cache
RUN_DEPENDS:=	${BUILD_DEPENDS}

FILES=		Net/Dict.php
DOCS=		dict.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
