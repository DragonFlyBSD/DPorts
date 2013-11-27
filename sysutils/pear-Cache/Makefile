# Created by: Thierry Thomas (<thierry@FreeBSD.org>)
# $FreeBSD: sysutils/pear-Cache/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Cache
PORTVERSION=	1.5.6
PORTREVISION=	1
CATEGORIES=	sysutils www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR framework for caching of arbitrary data

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request
RUN_DEPENDS=	${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
