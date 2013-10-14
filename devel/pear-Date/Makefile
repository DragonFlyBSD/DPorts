# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: devel/pear-Date/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Date
PORTVERSION=	1.4.7
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Date and Time Zone Classes

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
