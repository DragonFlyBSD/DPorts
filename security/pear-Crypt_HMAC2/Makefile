# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: security/pear-Crypt_HMAC2/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Crypt_HMAC2
PORTVERSION=	1.0.0
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Implementation of Hashed Message Authentication Code for PHP5

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
