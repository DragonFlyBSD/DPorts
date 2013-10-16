# Created by: TAKATSU Tomonari <tota@rtfm.jp>
# $FreeBSD: www/rubygem-amazon-ecs/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	amazon-ecs
PORTVERSION=	2.2.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	tota@FreeBSD.org
COMMENT=	A generic Amazon E-commerce REST API written in Ruby

LICENSE=	MIT

RUN_DEPENDS=	rubygem-nokogiri>=1.4:${PORTSDIR}/textproc/rubygem-nokogiri \
		${RUBY_PKGNAMEPREFIX}hmac>=0.3:${PORTSDIR}/security/ruby-hmac

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
