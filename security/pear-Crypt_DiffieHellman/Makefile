# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: security/pear-Crypt_DiffieHellman/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt_DiffieHellman
PORTVERSION=	0.2.6
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class implementing Diffie-Hellman Key Exchange protocol for PHP5

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	bcmath mbstring gmp

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
