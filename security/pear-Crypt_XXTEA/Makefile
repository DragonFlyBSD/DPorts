# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: security/pear-Crypt_XXTEA/Makefile 314260 2013-03-15 06:37:11Z miwi $

PORTNAME=	Crypt_XXTEA
PORTVERSION=	0.9.0
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR XXTEA encryption algorithm

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
