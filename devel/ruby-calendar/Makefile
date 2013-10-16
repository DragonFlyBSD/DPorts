# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: devel/ruby-calendar/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	calendar
PORTVERSION=	1.11.4r
PORTEPOCH=	1
CATEGORIES=	devel ruby
MASTER_SITES=	http://www.funaba.org/archive/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby modules to handle various calendars

USE_RUBY=	yes
USE_RUBY_SETUP=	yes
RUBY_SETUP=	install.rb

DOCS_EN=	README.en ext/sdn/README.sdncal20
DOCS_JA=	README
EXAMPLES_EN=	ext/calendar/cal*.rb

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
.for f in ${EXAMPLES_EN}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODEXAMPLESDIR}/
.endfor
	${MKDIR} ${RUBY_MODDOCDIR}/ja
.for f in ${DOCS_EN}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.for f in ${DOCS_JA}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/ja/
.endfor
.endif

.include <bsd.port.mk>
