# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: net/pear-XML_RPC/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	XML_RPC
PORTVERSION=	1.5.5
CATEGORIES=	net devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP implementation of the XML-RPC protocol

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	xml
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
