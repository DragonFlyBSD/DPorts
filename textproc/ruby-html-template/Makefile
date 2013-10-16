# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: textproc/ruby-html-template/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	html-template
PORTVERSION=	0.16
CATEGORIES=	textproc www ruby
MASTER_SITES=	http://shebang.jp/src/ruby/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Ruby library to use HTML as a template file from CGI scripts

USE_RUBY=	yes
USE_RUBY_SETUP=	yes
RUBY_SETUP=	install.rb

DOCS_EN=	ChangeLog \
		README \
		html-template.rd
DOCS_JA=	html-template.ja.rd

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
	${CP} -R ${WRKSRC}/example/ ${RUBY_MODEXAMPLESDIR}/
	${MKDIR} ${RUBY_MODDOCDIR}/ja
.for f in ${DOCS_EN}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.for f in ${DOCS_JA}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/ja/
.endfor
.endif

.include <bsd.port.mk>
