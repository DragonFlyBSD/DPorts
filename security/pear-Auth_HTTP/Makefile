# $FreeBSD: security/pear-Auth_HTTP/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Auth_HTTP
PORTVERSION=	2.1.8
CATEGORIES=	security www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR HTTP authentication

BUILD_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth
RUN_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
