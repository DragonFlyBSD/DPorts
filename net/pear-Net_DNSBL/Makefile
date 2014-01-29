# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Net_DNSBL/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Net_DNSBL
PORTVERSION=	1.3.7
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR DNSBL Checker

BUILD_DEPENDS=	${PEARDIR}/Cache/Lite.php:${PORTSDIR}/sysutils/pear-Cache_Lite \
		${PEARDIR}/Net/CheckIP.php:${PORTSDIR}/net/pear-Net_CheckIP \
		${PEARDIR}/Net/DNS/RR/A.php:${PORTSDIR}/dns/pear-Net_DNS \
		${PEARDIR}/HTTP/Request2.php:${PORTSDIR}/www/pear-HTTP_Request2
RUN_DEPENDS:=	${PEARDIR}/Cache/Lite.php:${PORTSDIR}/sysutils/pear-Cache_Lite \
		${PEARDIR}/Net/CheckIP.php:${PORTSDIR}/net/pear-Net_CheckIP \
		${PEARDIR}/Net/DNS/RR/A.php:${PORTSDIR}/dns/pear-Net_DNS \
		${PEARDIR}/HTTP/Request2.php:${PORTSDIR}/www/pear-HTTP_Request2

USE_PHP=	yes

PEAR_AUTOINSTALL=	yes

PORTSCOUT=	skipv:1.3.0a1

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
