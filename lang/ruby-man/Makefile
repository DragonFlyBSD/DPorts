# New ports collection makefile for:	ruby-man
# Date created:			Sat Aug 17 17:10:02 CEST 2000
# Whom:				olgeni@uli.it
#
# $FreeBSD: lang/ruby-man/Makefile 300896 2012-07-14 13:54:48Z beat $
#

PORTNAME=	ruby-man
PORTVERSION=	1.4.6
CATEGORIES+=	lang ruby
MASTER_SITES=	${MASTER_SITE_RUBY}
MASTER_SITE_SUBDIR=	doc
DISTNAME=	${PORTNAME}-${PORTVERSION}${LANGSUFFIX}
DIST_SUBDIR=	ruby

MAINTAINER?=	ruby@FreeBSD.org
COMMENT?=	Ruby reference manual, in HTML format

USE_RUBY=	yes
RUBY_NO_BUILD_DEPENDS=	yes
RUBY_NO_RUN_DEPENDS=	yes

RUBY_MODNAME=	ruby-man${LANGSUFFIX}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:R}${LANGSUFFIX}
NO_BUILD=	yes
PLIST_SUB=	LANGSUFFIX="${LANGSUFFIX}"

do-install:
	${MKDIR} ${RUBY_MODDOCDIR}
	${INSTALL_DATA} ${WRKSRC}/*.html ${RUBY_MODDOCDIR}

.include <bsd.port.mk>
