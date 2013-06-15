# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: www/rubygem-httparty/Makefile 319748 2013-06-03 02:19:07Z swills $

PORTNAME=	httparty
PORTVERSION=	0.11.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Library that Makes HTTP Fun Again

RUN_DEPENDS=	rubygem-multi_json>=1.0:${PORTSDIR}/devel/rubygem-multi_json \
		rubygem-multi_xml>=0.5.2:${PORTSDIR}/textproc/rubygem-multi_xml

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/httparty

.include <bsd.port.mk>
