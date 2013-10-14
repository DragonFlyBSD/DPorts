# $FreeBSD: devel/rubygem-soap4r/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	soap4r
PORTVERSION=	1.5.8
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Ruby implementation of SOAP 1.1

RUN_DEPENDS=	rubygem-httpclient>=2.1.1:${PORTSDIR}/www/rubygem-httpclient

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=    bin/wsdl2ruby.rb bin/xsd2ruby.rb

NO_STAGE=	yes
.include <bsd.port.mk>
