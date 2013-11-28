# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: security/pear-HTML_Crypt/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	HTML_Crypt
PORTVERSION=	1.3.4
CATEGORIES=	security www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Encrypts text which is later decoded using JavaScript on the client side

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
