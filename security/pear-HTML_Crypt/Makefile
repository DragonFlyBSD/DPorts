# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: security/pear-HTML_Crypt/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	HTML_Crypt
PORTVERSION=	1.3.4
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Encrypts text which is later decoded using JavaScript on the client side

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
