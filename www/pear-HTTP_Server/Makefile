# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: www/pear-HTTP_Server/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTTP_Server
PORTVERSION=	0.4.1
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	HTTP server class

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP \
		${PEARDIR}/Net/Server.php:${PORTSDIR}/net/pear-Net_Server
RUN_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP \
		${PEARDIR}/Net/Server.php:${PORTSDIR}/net/pear-Net_Server

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
