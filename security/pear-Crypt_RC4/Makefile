# Ports collection makefile for:  pear-Crypt_RC4
# Date created:			  25 November 2004
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/security/pear-Crypt_RC4/Makefile,v 1.9 2012/11/17 06:01:14 svnexp Exp $
#

PORTNAME=	Crypt_RC4
PORTVERSION=	1.0.3
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR encryption class for RC4 encryption

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

FILES=		Crypt/Rc4.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
