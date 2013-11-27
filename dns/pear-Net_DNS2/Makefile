# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: dns/pear-Net_DNS2/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_DNS2
PORTVERSION=	1.3.0
CATEGORIES=	dns net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP5 Resolver library used to communicate with a DNS server

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
