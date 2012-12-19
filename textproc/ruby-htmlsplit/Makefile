# New ports collection makefile for:	htmlsplit.rb
# Date created:		20 September 2001
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/textproc/ruby-htmlsplit/Makefile,v 1.9 2012/11/17 06:02:19 svnexp Exp $
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
