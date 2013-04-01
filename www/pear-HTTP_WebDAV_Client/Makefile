# Created by: Wen Heping<wenheping@gmail.com>
# $FreeBSD: www/pear-HTTP_WebDAV_Client/Makefile 314455 2013-03-17 15:28:55Z miwi $

PORTNAME=	HTTP_WebDAV_Client
PORTVERSION=	1.0.2
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	WebDAV Stream Wrapper Class

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request
RUN_DEPENDS:=	${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
