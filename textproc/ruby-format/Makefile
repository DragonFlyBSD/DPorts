# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: textproc/ruby-format/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	format
PORTVERSION=	1.09
CATEGORIES=	textproc ruby
MASTER_SITES=	SF/${PORTNAME}r/FormatR/FormatR.${PORTVERSION}
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	FormatR.${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Perl like formats for Ruby

USE_RUBY=	yes

NO_BUILD=	yes

NO_STAGE=	yes
post-patch:
	${RUBY} -i.orig -pe 'gsub(/"(format_test\.pl)/, "\"./\\1")' ${WRKSRC}/test_format.rb

do-install:
	${INSTALL_DATA} ${WRKSRC}/format.rb ${RUBY_SITELIBDIR}/
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}/test
.for f in test_format.rb format_test.pl
	${INSTALL_SCRIPT} ${WRKSRC}/${f} ${RUBY_MODEXAMPLESDIR}/
.endfor
	${INSTALL_DATA} ${WRKSRC}/test/* ${RUBY_MODEXAMPLESDIR}/test/
.endif

.include <bsd.port.mk>
