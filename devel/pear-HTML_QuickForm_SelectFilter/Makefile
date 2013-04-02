# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: devel/pear-HTML_QuickForm_SelectFilter/Makefile 314366 2013-03-16 16:14:17Z miwi $

PORTNAME=	HTML_QuickForm_SelectFilter
PORTVERSION=	1.0.0
CATEGORIES=	devel www pear
DISTNAME=	${PORTNAME}-${PORTVERSION}RC1

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Element for PEAR::HTML_QuickForm that defines dynamic filters

BUILD_DEPENDS=	${PEARDIR}/HTML/QuickForm.php:${PORTSDIR}/devel/pear-HTML_QuickForm
RUN_DEPENDS=	${PEARDIR}/HTML/QuickForm.php:${PORTSDIR}/devel/pear-HTML_QuickForm

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
