# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: security/pear-Crypt_XXTEA/Makefile 334871 2013-11-25 17:59:58Z antoine $

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
