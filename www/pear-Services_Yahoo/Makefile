# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: www/pear-Services_Yahoo/Makefile 314213 2013-03-15 01:27:26Z miwi $

PORTNAME=	Services_Yahoo
PORTVERSION=	0.2.0
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Provides access to the Yahoo! Web Services

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
