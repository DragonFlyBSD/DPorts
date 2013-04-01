# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: www/pear-Services_SharedBook/Makefile 314455 2013-03-17 15:28:55Z miwi $

PORTNAME=	Services_SharedBook
PORTVERSION=	0.2.6
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP wrapper for SharedBook Open API

BUILD_DEPENDS=	${PEARDIR}/HTTP/Client.php:${PORTSDIR}/www/pear-HTTP_Client
RUN_DEPENDS=	${PEARDIR}/HTTP/Client.php:${PORTSDIR}/www/pear-HTTP_Client

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
