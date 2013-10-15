# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: www/pear-HTTP_Header/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTTP_Header
PORTVERSION=	1.2.1
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR OO interface to modify and handle HTTP headers and status codes

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP
RUN_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
