# $FreeBSD: security/pear-Auth_HTTP/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Auth_HTTP
PORTVERSION=	2.1.8
CATEGORIES=	security www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR HTTP authentication

BUILD_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth
RUN_DEPENDS=	${PEARDIR}/Auth/Auth.php:${PORTSDIR}/security/pear-Auth

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
