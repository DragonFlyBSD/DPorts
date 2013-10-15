# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: net/pear-XML_RPC2/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	XML_RPC2
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	net devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	XML-RPC client/server library

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Cache/Lite.php:${PORTSDIR}/sysutils/pear-Cache_Lite \
		${PEARDIR}/HTTP/Request2.php:${PORTSDIR}/www/pear-HTTP_Request2
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Cache/Lite.php:${PORTSDIR}/sysutils/pear-Cache_Lite \
		${PEARDIR}/HTTP/Request2.php:${PORTSDIR}/www/pear-HTTP_Request2

PEAR_AUTOINSTALL=	yes
USE_PHP=	curl

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
