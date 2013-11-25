# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: security/pear-Auth_SASL/Makefile 334522 2013-11-21 20:47:47Z sunpoet $

PORTNAME=	Auth_SASL
PORTVERSION=	1.0.6
CATEGORIES=	security www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR abstraction of various SASL mechanism responses

LICENSE=	BSD

BUILD_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth
RUN_DEPENDS:=	${BUILD_DEPENDS}

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${.CURDIR}/../../devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
