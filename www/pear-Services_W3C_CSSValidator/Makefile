# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: www/pear-Services_W3C_CSSValidator/Makefile 314455 2013-03-17 15:28:55Z miwi $

PORTNAME=	Services_W3C_CSSValidator
PORTVERSION=	0.2.3
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP interface to W3C CSS Validator API

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request2.php:${PORTSDIR}/www/pear-HTTP_Request2
RUN_DEPENDS=	${PEARDIR}/HTTP/Request2.php:${PORTSDIR}/www/pear-HTTP_Request2

PEAR_AUTOINSTALL=	YES

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
