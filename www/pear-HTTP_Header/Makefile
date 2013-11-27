# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: www/pear-HTTP_Header/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	HTTP_Header
PORTVERSION=	1.2.1
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR OO interface to modify and handle HTTP headers and status codes

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP
RUN_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
