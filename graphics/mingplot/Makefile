# Created by: UMENO Takashi <umeno@rr.iij4u.or.jp>
# $FreeBSD: graphics/mingplot/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	mingplot
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	graphics www
MASTER_SITES=	http://0xcc.net/mingplot/

MAINTAINER=	umeno@rr.iij4u.or.jp
COMMENT=	A tool to generate a flash-based chart

RUN_DEPENDS=	${RUBY_SITEARCHLIBDIR}/ming/mingc.so:${PORTSDIR}/graphics/ruby-ming

USE_RUBY=	yes
USE_RUBY_FEATURES=	iconv

NO_STAGE=	yes
.include <bsd.port.mk>
