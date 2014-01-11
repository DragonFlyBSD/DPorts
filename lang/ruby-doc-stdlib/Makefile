# Created by: Alexander Novitsky <alecn2002@yandex.ru>
# $FreeBSD: lang/ruby-doc-stdlib/Makefile 338551 2014-01-03 15:50:42Z swills $

PORTNAME=	stdlib
PORTVERSION=	1.9.3

PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}doc-
CATEGORIES=	lang ruby docs

DISTNAME=	ruby_${PORTVERSION:S/./_/g}_${PORTNAME}_rdocs
MASTER_SITES=	http://www.ruby-doc.org/downloads/
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Documentation for the Ruby language standard library

USE_RUBY=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${DISTNAME:S/_rdocs//}

do-install:
	@${MKDIR} ${STAGEDIR}${RUBY_DOCDIR}
	@${CP} -R ${WRKSRC} ${STAGEDIR}${RUBY_DOCDIR}/${PORTNAME}

.include <bsd.port.mk>
