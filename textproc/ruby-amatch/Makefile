# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: textproc/ruby-amatch/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	amatch
PORTVERSION=	0.2.5
CATEGORIES=	textproc ruby
MASTER_SITES=	RF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for approximate string matching and searching

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes # build while install
USE_RUBY=	yes
USES=		gmake

PLIST_FILES=	bin/agrep.rb %%RUBY_SITELIBDIR%%/amatch/version.rb \
		%%RUBY_SITEARCHLIBDIR%%/amatch.so
PLIST_DIRS=	%%RUBY_SITELIBDIR%%/amatch

AMATCH_RUBY=	install.rb
DOCSDIR=	${RUBY_MODDOCDIR}
PORTDOCS=	CHANGES README

NO_STAGE=	yes
.include <bsd.port.options.mk>

do-install:
	@${ECHO_MSG} "===>  Running ${AMATCH_RUBY} to install"
	cd ${WRKSRC}/ && ${SETENV} ${MAKE_ENV} ${RUBY} ${RUBY_FLAGS} ${AMATCH_RUBY} install
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
