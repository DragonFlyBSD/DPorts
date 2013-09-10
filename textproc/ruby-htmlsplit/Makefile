# New ports collection makefile for:	htmlsplit.rb
# Date created:		20 September 2001
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: textproc/ruby-htmlsplit/Makefile 300897 2012-07-14 14:29:18Z beat $
#

PORTNAME=	htmlsplit
PORTVERSION=	1.0.2
CATEGORIES=	textproc www ruby
MASTER_SITES=	http://www.moonwolf.com/ruby/archive/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//g}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Ruby library to split an HTML document into tags and contents

USE_ZIP=	yes
USE_RUBY=	yes

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
PLIST_FILES=	%%RUBY_SITELIBDIR%%/htmlsplit.rb

do-install:
	${INSTALL_DATA} ${WRKSRC}/htmlsplit.rb ${RUBY_SITELIBDIR}/

.include <bsd.port.mk>
#		http://www.moonwolf.com/ruby/archive/htmlsplit102.zip
