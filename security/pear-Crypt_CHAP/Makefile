# Ports collection makefile for:  pear-Crypt_CHAP
# Date created:			  09 March 2004
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/security/pear-Crypt_CHAP/Makefile,v 1.11 2012/11/17 06:01:14 svnexp Exp $
#

PORTNAME=	Crypt_CHAP
PORTVERSION=	1.5.0
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class for generating CHAP packets

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PHP=	mcrypt mhash

CATEGORY=	Crypt
FILES=		CHAP.php
TESTS=		Crypt_CHAP.phpt

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
