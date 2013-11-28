# Created by: Wen Heping<wenheping@gmail.com>
# $FreeBSD: www/pear-HTTP_WebDAV_Client/Makefile 334871 2013-11-25 17:59:58Z antoine $

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
