# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: mail/ruby-rmail/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rmail
PORTVERSION=	0.17
CATEGORIES=	mail ruby
MASTER_SITES=	http://www.lickey.com/rubymail/download/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	rubymail-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A lightweight mail manipulating library for Ruby

USE_RUBY=	yes
USE_RUBY_SETUP=	yes
RUBY_SETUP=	install.rb

DOCS=		NEWS NOTES README THANKS TODO doc

NO_STAGE=	yes
post-extract:
	${FIND} ${WRKSRC} -name '*~' -delete

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	${CP} -R ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.mk>
