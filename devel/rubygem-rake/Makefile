# Whom:	Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: devel/rubygem-rake/Makefile 319595 2013-06-01 21:23:29Z swills $

PORTNAME=	rake
PORTVERSION=	10.0.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Make

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

MANCOMPRESSED=	yes
MAN1=		rake.1

.include <bsd.port.pre.mk>
PLIST_FILES=	bin/rake

post-install:
	${MV} ${PREFIX}/${GEM_LIB_DIR}/doc/rake.1.gz ${PREFIX}/man/man1
	${CHMOD} ${MANMODE} ${PREFIX}/man/man1/rake.1.gz
	${CHOWN} ${MANOWN}:${MANGRP} ${PREFIX}/man/man1/rake.1.gz

.include <bsd.port.post.mk>
