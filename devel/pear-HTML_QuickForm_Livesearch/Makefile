# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: devel/pear-HTML_QuickForm_Livesearch/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	HTML_QuickForm_Livesearch
PORTVERSION=	0.4.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Element for PEAR::HTML_QuickForm to enable a suggest search

BUILD_DEPENDS=	${PEARDIR}/HTML/QuickForm.php:${PORTSDIR}/devel/pear-HTML_QuickForm \
		${PEARDIR}/HTML/AJAX.php:${PORTSDIR}/www/pear-HTML_AJAX
RUN_DEPENDS:=	${PEARDIR}/HTML/QuickForm.php:${PORTSDIR}/devel/pear-HTML_QuickForm \
		${PEARDIR}/HTML/AJAX.php:${PORTSDIR}/www/pear-HTML_AJAX

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
