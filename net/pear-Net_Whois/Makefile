# Created by: chinsan
# $FreeBSD: net/pear-Net_Whois/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net_Whois
PORTVERSION=	1.0.5
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A tool to query internet domain name services

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
