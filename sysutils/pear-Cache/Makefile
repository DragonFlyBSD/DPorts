# Created by: Thierry Thomas (<thierry@FreeBSD.org>)
# $FreeBSD: sysutils/pear-Cache/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	Cache
PORTVERSION=	1.5.6
PORTREVISION=	1
CATEGORIES=	sysutils www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR framework for caching of arbitrary data

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request
RUN_DEPENDS=	${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
