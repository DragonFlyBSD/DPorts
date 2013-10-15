# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: textproc/ruby-deplate/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=		deplate
PORTVERSION=		0.8.5
CATEGORIES=		textproc ruby
MASTER_SITES=		SF
PKGNAMEPREFIX=		${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=		ruby

MAINTAINER=		ruby@FreeBSD.org
COMMENT=		Ruby tool for converting wiki-like markup

LICENSE=		GPLv2
LICENSE_FILE=		${WRKSRC}/LICENSE.TXT

WRKSRC=			${WRKDIR}/${PORTNAME}

USE_ZIP=		yes
USE_RUBY=		yes
USE_RUBY_SETUP=		yes

MAN1=			deplate.1

NO_STAGE=	yes
.include <bsd.port.mk>
