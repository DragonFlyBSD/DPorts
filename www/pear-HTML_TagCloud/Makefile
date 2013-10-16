# Created by: Wen heping <wenheping@gmail.com>
# $FreeBSD: www/pear-HTML_TagCloud/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTML_TagCloud
PORTVERSION=	1.0.0
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Generate TagCloud in HTML And Visualize Tags

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
