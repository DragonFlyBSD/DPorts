# New ports collection makefile for:	Ruby-Div
# Date created:		10 February 2003
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/www/ruby-div/Makefile,v 1.10 2012/11/17 06:03:03 svnexp Exp $
#

PORTNAME=	div
PORTVERSION=	1.3.2
CATEGORIES=	www ruby
MASTER_SITES=	http://www2a.biglobe.ne.jp/~seki/ruby/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A web application server using dRuby and ERB2

USE_RUBY=	yes
USE_RUBY_FEATURES=	drb erb

NO_BUILD=	yes

do-install:
	cd ${WRKSRC}; ${RUBY} install.rb
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
	${CP} -R ${WRKSRC}/sample/* ${RUBY_MODEXAMPLESDIR}/
	${MKDIR} ${RUBY_MODDOCDIR}
	${CP} -R ${WRKSRC}/doc/* ${RUBY_MODDOCDIR}/
.endif

.include <bsd.port.mk>
