# Ports collection makefile for:  pear-Crypt_RSA
# Date created:			  12 May 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/security/pear-Crypt_RSA/Makefile,v 1.9 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	Crypt_RSA
PORTVERSION=	1.2.1
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class allows you to use two-key strong cryptography

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

OPTIONS=	BCMATH "PHP BCMath extension support" off \
		GMP "PHP GMP extension support" off

LATEST_LINK=	pear-${PORTNAME}

.include <bsd.port.options.mk>

.for opt in BCMATH GMP
.    if defined(WITH_${opt})
USE_PHP+=	${opt:tl}
.    endif
.endfor

CATEGORY=	Crypt
FILES=		RSA.php RSA/ErrorHandler.php RSA/Key.php RSA/KeyPair.php \
		RSA/MathLoader.php RSA/Math/BCMath.php RSA/Math/BigInt.php \
		RSA/Math/GMP.php
DOCS=		CREDITS LICENSE Crypt_RSA.txt math_wrappers.txt
EXAMPLES=	web_interface.php
TESTS=		test1.php test2.php bench.php

post-extract:
	@${MV} ${WRKSRC}/CREDITS ${WRKSRC}/docs
	@${MV} ${WRKSRC}/LICENSE ${WRKSRC}/docs

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
