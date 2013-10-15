# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: devel/pear-HTML_Common2/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	HTML_Common2
PORTVERSION=	2.1.0
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR::HTML_Common2 is a base class for other HTML classes

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
