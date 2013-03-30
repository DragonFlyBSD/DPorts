# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: devel/pear-HTML_Common/Makefile 314196 2013-03-15 00:39:14Z miwi $

PORTNAME=	HTML_Common
PORTVERSION=	1.2.5
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR::HTML_Common is a base class for other HTML classes

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
