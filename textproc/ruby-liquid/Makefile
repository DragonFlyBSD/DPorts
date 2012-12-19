# New ports collection makefile for:	ruby-liquid
# Date created:		6 October 2008
# Whom:			stas
#
# $FreeBSD: ports/textproc/ruby-liquid/Makefile,v 1.5 2012/11/17 06:02:19 svnexp Exp $
#

PORTNAME=	liquid
PORTVERSION=	2.0.0
CATEGORIES=	textproc ruby
MASTER_SITES=	RF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A non evaling template engine for ruby

USE_RUBY=	yes
NO_BUILD=	yes

SADIR=		${RUBY_SITELIBDIR}
DOCS=		CHANGELOG README.txt History.txt

do-install:
	${MKDIR} ${SADIR}/liquid/tags ${SADIR}/liquid/extras
	${INSTALL_DATA} ${WRKSRC}/lib/liquid.rb ${SADIR}/
	${INSTALL_DATA} ${WRKSRC}/lib/liquid/*.rb ${SADIR}/liquid/
	${INSTALL_DATA} ${WRKSRC}/lib/liquid/tags/*.rb ${SADIR}/liquid/tags/
	${INSTALL_DATA} ${WRKSRC}/lib/extras/*.rb ${SADIR}/liquid/extras/
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}/
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${RUBY_MODDOCDIR}/
.endif

.include <bsd.port.mk>
