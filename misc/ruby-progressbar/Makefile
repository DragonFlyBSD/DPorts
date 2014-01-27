# Created by: TAKATSU Tomonari <tota@rtfm.jp>
# $FreeBSD: misc/ruby-progressbar/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	progressbar
PORTVERSION=	0.9
CATEGORIES=	misc ruby
MASTER_SITES=	http://0xcc.net/ruby-progressbar/ \
		${MASTER_SITE_LOCAL:S|%SUBDIR%|tota/progressbar|}
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	ruby-${PORTNAME}-${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	A text progress bar library for Ruby

USE_RUBY=	yes
NO_BUILD=	yes

RUBY_RD_FILES=	progressbar.en.rd progressbar.ja.rd
DOCS=	ChangeLog ${RUBY_RD_FILES}

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${INSTALL_WRKSRC}/${PORTNAME}.rb ${RUBY_SITELIBDIR}
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}
	cd ${INSTALL_WRKSRC}; ${INSTALL_DATA} ${DOCS} ${RUBY_MODDOCDIR}
.endif

.include <bsd.port.mk>
