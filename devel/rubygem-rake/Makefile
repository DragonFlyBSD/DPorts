# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: head/devel/rubygem-rake/Makefile 342511 2014-02-04 12:06:56Z sunpoet $

PORTNAME=	rake
PORTVERSION=	10.1.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Make

LICENSE=	MIT

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/rake \
		man/man1/rake.1.gz

post-install:
	${INSTALL_MAN} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/doc/rake.1.gz ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
