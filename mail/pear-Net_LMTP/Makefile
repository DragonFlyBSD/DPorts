# Ports collection makefile for:  pear-Net_LMTP
# Date created:			  07 March 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/mail/pear-Net_LMTP/Makefile,v 1.6 2012/11/17 05:59:10 svnexp Exp $
#

PORTNAME=	Net_LMTP
PORTVERSION=	1.0.2
CATEGORIES=	mail www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR implementation of the RFC2033 LMTP protocol

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
PEAR_CATSRC=	yes
FILES=		LMTP.php
TESTS=		test_lmtp.php
_TESTSDIR=	.

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
