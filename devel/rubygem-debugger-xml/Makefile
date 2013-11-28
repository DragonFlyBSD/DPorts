# Created by: Vladimir Kondratiev <wulf@mail.mipt.ru>
# $FreeBSD: devel/rubygem-debugger-xml/Makefile 334893 2013-11-25 19:59:02Z sunpoet $

PORTNAME=	debugger-xml
PORTVERSION=	0.3.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	wulf@cicgroup.ru
COMMENT=	XML interface for rubygem-debugger

LICENSE=	MIT

RUN_DEPENDS=	rubygem-builder>=2.0.0:${PORTSDIR}/devel/rubygem-builder \
		rubygem-debugger>=1.6.2:${PORTSDIR}/devel/rubygem-debugger

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rdebug-ide bin/rdebug-vim

.include <bsd.port.mk>
