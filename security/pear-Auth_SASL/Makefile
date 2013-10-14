# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: security/pear-Auth_SASL/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Auth_SASL
PORTVERSION=	1.0.6
CATEGORIES=	security www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR abstraction of various SASL mechanism responses

BUILD_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth
RUN_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
