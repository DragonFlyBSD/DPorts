# Ports collection makefile for:  pear-HTML_Form
# Date created:			  27 October 2004
# Whom:				  Antonio Carlos Venancio Junior (<antonio@php.net>)
#
# $FreeBSD: ports/devel/pear-HTML_Form/Makefile,v 1.11 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	HTML_Form
PORTVERSION=	1.3.0
CATEGORIES=	devel pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR simple HTML form package

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	HTML
FILES=		Form.php
TESTS=		form.phpt

post-extract:
	@${MV} ${WRKSRC}/HTML/* ${WRKSRC}

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"

post-patch:
	@${REINPLACE_CMD} -e "s|@include_path@|${PREFIX}/${LPEARDIR}|g" \
		${WRKSRC}/tests/${TESTS}

.include <bsd.port.post.mk>
