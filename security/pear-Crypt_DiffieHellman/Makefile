# Ports collection makefile for:  pear-Crypt_DiffieHellman
# Date created:			  27 Jan 2008
# Whom:				  Ditesh Shashikant Gathani <ditesh@gathani.org>
#
# $FreeBSD: ports/security/pear-Crypt_DiffieHellman/Makefile,v 1.7 2012/11/17 06:01:14 svnexp Exp $
#

PORTNAME=	Crypt_DiffieHellman
PORTVERSION=	0.2.6
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class implementing Diffie-Hellman Key Exchange protocol for PHP5

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	bcmath mbstring gmp

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
