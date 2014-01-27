# Created by: chinsan
# $FreeBSD: net/pear-Net_Whois/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Net_Whois
PORTVERSION=	1.0.5
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A tool to query internet domain name services

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
