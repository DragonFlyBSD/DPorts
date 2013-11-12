# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: devel/pear-I18N/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	I18N
PORTVERSION=	1.0.0
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR internationalization package

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
