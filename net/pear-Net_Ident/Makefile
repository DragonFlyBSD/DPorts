# Ports collection makefile for:  pear-Net_Ident
# Date created:			  07 March 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/net/pear-Net_Ident/Makefile,v 1.5 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_Ident
PORTVERSION=	1.1.0
CATEGORIES=	net www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR identification protocol implementation

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		Ident.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
