# Created by: Antonio Carlos Venancio Junior (<antonio@php.net>)
# $FreeBSD: devel/pear-HTML_Form/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	HTML_Form
PORTVERSION=	1.3.0
PORTREVSION=	1
CATEGORIES=	devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR simple HTML form package

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
